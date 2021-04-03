 #include <stdio.h>
 #include <iostream>
 #include <cstdlib>

int main () {
	int qtd_filiais;
	system("Color A");
	printf("Deseja inserir quantas filiais? \n");
	scanf("%i", &qtd_filiais);
	
	int num_filial[qtd_filiais];
	float mes1[qtd_filiais] = {}, mes2[qtd_filiais] = {}, mes3[qtd_filiais] = {}, total_filial[qtd_filiais]={};
	float total_empresa = 0;
	
	system("cls");
	
	for(int i = 1; i < qtd_filiais; i++){
		printf("Insira o numero da filial: %i (caso deseje sair tecle 0)\n", i);
		scanf("%i", &num_filial[i]);
	
	if (num_filial[1] == 0){
		system("cls");
		printf("\n");
		printf("*** NAO houve o cadastro de nenhuma filial ***\n");
		exit(0);
		}
		
	if(num_filial[i] == 0){
	   system("cls");
	    goto inicio;
    }
		
		printf("Valor do 1 mes: R$ \n");
		scanf("%f", &mes1[i]);
		printf("Valor do 2 mes: R$ \n");
		scanf("%f", &mes2[i]);
		printf("Valor do 3 mes: R$ \n");
		scanf("%f", &mes3[i]);
		total_filial[i] = mes1[i] + mes2[i] + mes3[i];
        total_empresa = total_empresa + total_filial[i];
	 
	}
	
	system("cls");
	
	inicio:
    for(int i = 1; i <= qtd_filiais; i++){
        if(num_filial[i] == 0){
           	printf("\n");
            goto fim;
            exit(0);
    	}
		 printf("Checagem dos dados: \n\n");
         printf("---------------------------------------------------------- \n");
         printf("Numero da filial: %i \n", num_filial[i]);
         printf("O valor do mes 1 foi: %f \n", mes1[i]);
         printf("O valor do mes 2 foi: %f \n", mes2[i]);
         printf("O valor do mes 3 foi: %f \n\n", mes3[i]);
         printf("O valor total das vendas da filial %i foi: R$ %f \n", num_filial[i], total_filial[i]);
         printf("----------------------------------------------------------- \n\n");

         if(num_filial[i] == 0){
           printf("\n");
            goto fim;
            exit(0);
         }
        }
    fim:
    printf(" *** O total recebido pela(s) venda(s) da(s) filiais foi(ram): R$ %f  \n", total_empresa);

	return 0;
}
