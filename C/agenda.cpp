#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool running = true;

// Registro data
typedef struct {
   int dia,mes,ano;         
} tdata;

// Registro contatos
typedef struct {
   char nome[50];
   char fone[20];
   tdata dtnasc;
   bool active;     
} tcontato;

// Carrega contatos do disco e acrescenta 1000 entradas vazias na agenda.
tcontato * leitura(char filename[], int *qc) {
    FILE *fp;
    tcontato *v;
    int i;
    long tb;
    fp=fopen(filename, "rb");
    if (fp==NULL) { *qc=0; tb=0;}
    else {
        fseek(fp, 0, SEEK_END);
        tb=ftell(fp);  
        *qc=tb/sizeof(tcontato); 
        fseek(fp, 0, SEEK_SET);
    }
    tb=tb+ 1000*sizeof(tcontato);  // adicionando 1000 espaços no vetor 
    v=(tcontato *) malloc(tb);
    
    for(i=0; i<*qc; i++) {
        fread(&v[i], sizeof(tcontato), 1, fp);         
    }
    
    if (fp) fclose(fp);
    return v;
}

// Permite incluir contatos. Encerra com "fim".
int incluir(tcontato *v, int *qc) {
    char nome[50];
    int i;
    printf("Nome: "); gets(nome);
    i=*qc;
    while (strcmpi(nome, "fim") !=0 && i<*qc+1000) {
        strcpy(v[i].nome, nome);
        printf("Fone: "); gets(v[i].fone); 
        fflush(stdin); 
        printf("Data Nascimento: ");
        scanf("%d/%d/%d", &v[i].dtnasc.dia,&v[i].dtnasc.mes, &v[i].dtnasc.ano); 
        v[i].active = true;
        i++;
        fflush(stdin);
        printf("Nome: "); gets(nome);   
    }
    *qc=i;
    return 0;
}

// Salva a agenda em disco. Somente entradas preenchidas.
int salvar(char filename[], tcontato *v, int qc) {
   FILE *fp;
   int i;
   fp=fopen(filename, "wb");
   if (fp==NULL) return -1;
   
   for(i=0; i<qc; i++) 
     fwrite(&v[i], sizeof(tcontato), 1, fp);

   fclose(fp);
   return 0;    
}

// Lista a agenda.
void listar(tcontato *v, int qc){
    int i;
    for(i=0; i<qc; i++) 
    	if(v[i].active)
	      printf("%-30s  %-20s  %d/%d/%d\n", v[i].nome, v[i].fone, 
	      v[i].dtnasc.dia,
	      v[i].dtnasc.mes,
	      v[i].dtnasc.ano);

    system("pause");
}

void trashbin(tcontato *v, int qc){
	int i;
	for(i=0; i<qc; i++)
		if(v[i].active == false)
		  printf("%-30s  %-20s  %d/%d/%d\n", v[i].nome, v[i].fone, 
	      v[i].dtnasc.dia,
	      v[i].dtnasc.mes,
	      v[i].dtnasc.ano);
}

void deleteContact(tcontato *v, int qc){
	char nome[50];
	printf("Insira o nome: ");
	scanf("%s", &nome);
	for(int i = 0; i < qc; i++)
		if(v[i].nome == nome)
			v[i].active = false;
			
	printf("\nMOVIDO PARA A LIXEIRA!!!\n");
	system("pause");
}

// Função principal.
int main() {
	while(running){
	  int qc;
	  int option;
	  system("cls");
	  tcontato *agenda;  
	  agenda = leitura("Agenda.dad", &qc); 
	  printf("#####< AGENDA >#####\n");
	  printf("1-ADICIONAR CONTATO\n");
	  printf("2-LISTAR CONTATOS\n");
	  printf("3-EXCLUIR CONTATOS\n");
	  printf("4-EXIBIR LIXEIRA\n");
	  printf("5-ENCERRAR APLICAÇÃO\n");
	  printf("OPÇÃO: ");
	  fflush(stdin);
	  scanf("%d", &option);
	  
	  switch(option){
	  	case 1:
	  		fflush(stdin);
	  		incluir(agenda, &qc);
	  		salvar("Agenda.dad", agenda, qc); 
	  		break;
	  	case 2:
	  		listar(agenda, qc);
	  		break;
	  	case 3:
	  		deleteContact(agenda, qc);
	  		break;
	  	case 4:
	  		trashbin(agenda, qc);
	  		break;
	  	case 5:
	  		running = false;
	  		break;
	  	default:
	  		running = false;
	  		break;
	  }
	}
  return 0;
}
