/*
* Arquivo: produtorio.c
* Autor: Rodrigo Tarrega Martins Junior
* Matricula: 12121ETE007
* Criado em: 04/12/2022
*/

# include  < stdio.h >

int  principal ( vazio ){
    int N;
    printf ( " Quantidade: " );
    scanf ( " %d " , &N);

    flutuar vetor[N];
    float soma = 1 ;

    for ( int i = 0 ; i < N; i++){
        printf ( " Número %d : " , i+ 1 );
        scanf ( " %f " , vetor+i);
        soma = soma * vetor[i];
    }

    printf ( " %g " , vetor[ 0 ]);

    for ( int i = 1 ; i < N; i++){
        printf ( " * %g " , vetor[i]);
    }
    printf ( " = %g  \n " , soma);


    retornar  1 ;
}
