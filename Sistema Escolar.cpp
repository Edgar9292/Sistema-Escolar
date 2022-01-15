float media,n1,n2,n3,n4; 
int  rotcadastro(void) ; 
int  rotlistar(void) ; 
int  rotcorrigir( void) ; 
int  rotpesquisa(void);
int  rotaprovado(void);
int  rotreprovado(void);
int i,j,x,proc,flag,alt;
char nome[80];	

int main(void){
	
	char tecla;
	int OPCAO=0;
	while (OPCAO!=7)
	{
		printf( "\n\nMenu Principal\n");  
		printf( "---- ---------- \n\n") ;       
		printf( "1 -  Cadastro\n") ;       
		printf( "2 -  Listagem\n");    
		printf( "3 -  Corrigir\n");   
		printf( "4 -  Pesquisar\n");      
		printf( "5 -  Aprovados\n");     
		printf( "6 -  Reprovados\n");  
		printf( "7 -  Fim  do Programa\n\n"); 
		printf( "Escolha uma opcao: "); 
		fflush(stdin); 
		scanf( "%d",  &OPCAO) ;        
	
		switch (OPCAO) 
		{          
		case 1:rotcadastro(); break; 
		case 2:rotlistar();break;           
		case 3:rotcorrigir();break;            
		case 4:rotpesquisa();break;      
		case 5:rotaprovado();break;        
		case 6:rotreprovado();break;
		default:printf("Opcao invalida");  
	}
	}
	return(0);
}

		int  rotcadastro(void)  
		{   
		char  TECLA;  
		for (i=1; i<5; i++){
		
		printf ("Nome:");
		fflush(stdin);scanf ("%s",&nome);
		
		printf("Nota do primeiro bimestre:");
		scanf ("%f",&n1);
		printf("Nota do segundo bimestre:");
		scanf ("%f",&n2);
		printf("Nota do terceiro bimestre:");
		scanf ("%f",&n3);
		printf("Nota do quarto bimestre:");
		scanf ("%f",&n4);
		printf("\n");	
		}
		printf("\n Tecle <Enter> para acessar o menu:");   
		fflush(stdin);    
		while (( TECLA  = getchar()) != '\r')   
		return(0);	
		}
		
			int  rotlistar(void)  {   
			char  TECLA; 
			for (i=1;i<6;i++)
	        {
	        printf("Nome: %s\n",nome);
			printf("\n Tecle <Enter>  para acessar o menu: ");    
			fflush(stdin);    
		
			while (( TECLA = getchar()) != '\r')   
			return(0) ;
	}  
}
				int  rotcorrigir(void)  {   
				char  TECLA;   
				
				char nom[30];
					
			    flag=0;
			    cls
			
			    printf("Nome: %s\n",nome);
				printf( "\nQual nome deseja editar: ");
				printf ("Nome:");
				fflush(stdin);fgets (nome, 80, stdin);		
					   
			    for(i=1;i<6;i++)
			    if(strcmp(nom,nome) == 0 )
			   
			    flag = 1;	
			        	
			    printf("Novo Nome:");
			    fgets(nom,29,stdin);
			    strcpy(nome,nom);
			    {
			    printf ("Nota 1:");
				scanf ("%f",&n1);	
				{
			    printf ("Nota 2:");
				scanf ("%f",&n2);
				{
			    printf ("Nota 3:");
				scanf ("%f",&n3);
				{
			    printf ("Nota 4:");
				scanf ("%f",&n4);
			    }
		        printf("Edicao realizada com sucesso !\n");
		        }
		        if( ! flag )
		        printf("nNome inesistente!\n");
				}  
				printf("\ nTecle <Ent er>  para acessar  o  menu: ");    
				fflush(stdin);    
				while (( TECLA  = getchar()) != '\r')   
				return(0) ; 
				}  
			}
	
		int  rotpesquisa ( void) { 
		
		char  TECLA;   char nome[80];
		printf ("Qual aluno deseja pesquisar: \n");
		fflush(stdin);
		fgets (nome, 80, stdin);
		i=0;
		proc=0;
		while (i<5 && proc==0){
		
		i=i+1;
		}
		if (proc==1)
		{
		printf ("Aluno pesquisado: %s\n",nome);
		printf ("Nota 1: %s\n",n1);
		printf ("Nota 2: %s\n",n2);
		printf ("Nota 3: %s\n",n3);
		printf ("Nota 4: %s\n",n4);
		}
		else
		printf ("\nNome invalido");	   
		printf ("\ nTecle <Ent er>  para acessar  o  menu: ");    
		fflush(stdin);    while (( TECLA  = getchar()) != '\r')   
		return(0) ;	
}
 
