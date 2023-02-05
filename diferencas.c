/*
* Arquivo: diferencas.c
* Autor: Rodrigo Tarrega Martins Junior
* Matricula: 12121ETE007
* Criado em: 04/12/2022
*/

# include  < stdio.h >

int  principal ( vazio ){
    int N;
    printf ( " Quantidade: " );
    scanf ( " %d " , &N);

    float float [N];
    for ( int i = 0 ; i< N; i++){
        printf ( " Número %d : " , i+ 1 );
        scanf ( " %f " , floats+i);
    }
    // calcula diferenças
    float difs[N - 1 ];
    for ( int i = 0 ; i< N- 1 ; i++){
        difs[i] = floats[i+ 1 ] - floats[i];
    }
    // maior e menor diferença
    float maior = difs[ 0 ];
    float menor = difs[ 0 ];
    for ( int i= 0 ; i < N- 1 ; i++) {
        if (difs[i]>maior){
            maior = difs[i];
        }
        if (difs[i]<menor){
            menor = difs[i];
        }
    }

    printf ( " %g " , difs[ 0 ]);
    for ( int i = 1 ; i<N- 1 ; i++){
        printf ( " , %g " , difs[i]);
    } printf ( " \n " );

    printf ( " max: %g \n min: %g \n " ,maior,menor);

    retornar  1 ;
}
