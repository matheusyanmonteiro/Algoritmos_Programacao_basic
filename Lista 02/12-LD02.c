#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d",&a);

    switch(a){
    case 1:
    printf(" Nome: ACRE \n Sigla: AC \n Capital: RIO BRANCO \n Regiao: NORTE ");
    break;
    case 2:
    printf(" Nome: ALAGOAS \n Sigla: AL \n Capital: MACEIO \n Regiao: NORDESTE ");
    break;
    case 3:
    printf(" Nome: AMAPA \n Sigla: AP \n Capital: MACAPA \n Regiao: NORTE ");
    break;
    case 4:
    printf(" Nome: AMAZONAS \n Sigla: AM \n Capital: MANAUS \n Regiao: NORTE ");
    break;
    case 5:
    printf(" Nome: BAHIA \n Sigla: BA \n Capital: SALVADOR \n Regiao: NORDESTE ");
    break;
    case 6:
    printf(" Nome: CEARA \n Sigla: CE \n Capital: FORTALEZA \n Regiao: NORDESTE ");
    break;
    case 7:
    printf(" Nome: ESPIRITO SANTO \n Sigla: ES \n Capital: VITORIA \n Regiao: SUDESTE ");
    break;
    case 8:
    printf(" Nome: GOIAS \n Sigla: GO \n Capital: GOIANIA \n Regiao: CENTRO-OESTE ");
    break;
    case 9:
    printf(" Nome: MARANHAO \n Sigla: MA \n Capital: SAO LUIS \n Regiao: NORDESTE ");
    break;
    case 10:
    printf(" Nome: MATO GROSSO \n Sigla: MT \n Capital: CUIABA \n Regiao: CENTRO-OESTE ");
    break;
    case 11:
    printf(" Nome: MATO GROSSO DO SUL \n Sigla: MS \n Capital: CAMPO GRANDE \n Regiao: CENTRO-OESTE ");
    break;
    case 12:
    printf(" Nome: MINAS GERAIS \n Sigla: MG \n Capital: BELO HORIZONTE \n Regiao: SUDESTE ");
    break;
    case 13:
    printf(" Nome: PARA \n Sigla: PA \n Capital: BELEM \n Regiao: NORTE ");
    break;
    case 14:
    printf(" Nome: PARAIBA \n Sigla: PB \n Capital: JOAO PESSOA \n Regiao: NORDESTE ");
    break;
    case 15:
    printf(" Nome: PARANA \n Sigla: PR \n Capital: CURITIBA \n Regiao:  SUL ");
    break;
    case 16:
    printf(" Nome: PERNAMBUCO \n Sigla: PE \n Capital: RECIFE \n Regiao: NORDESTE ");
    break;
    case 17:
    printf(" Nome: PIAUI \n Sigla: PI \n Capital: TERESINA \n Regiao: NORDESTE ");
    break;
    case 18:
    printf(" Nome: RIO DE JANEIRO \n Sigla: RJ \n Capital: RIO DE JANEIRO \n Regiao: SUDESTE ");
    break;
    case 19:
    printf(" Nome: RIO GRANDE DO NORTE \n Sigla: RN \n Capital: NATAL \n Regiao: NORDESTE ");
    break;
    case 20:
    printf(" Nome: RIO GRANDE DO SUL \n Sigla: RS \n Capital: PORTO ALEGRE \n Regiao: SUL ");
    break;
    case 21:
    printf(" Nome: RONDONIA  \n Sigla: RO \n Capital: PORTO VELHO \n Regiao: NORTE ");
    break;
    case 22:
    printf(" Nome: RORAIMA \n Sigla: PR \n Capital: BOA VISTA \n Regiao: NORTE ");
    break;
    case 23:
    printf(" Nome: SANTA CATARINA \n Sigla: SC \n Capital: FLORIANOPOLIS \n Regiao: SUL ");
    break;
    case 24:
    printf(" Nome: SAO PAULO \n Sigla: SP \n Capital: SAO PAULO \n Regiao: SUDESTE ");
    break;
    case 25:
    printf(" Nome: SERGIPE \n Sigla: SE \n Capital: ARACAJU \n Regiao:  NORDESTE ");
    break;
    case 26:
    printf(" Nome: TOCANTINS \n Sigla: TO \n Capital: PALMAS \n Regiao:  NORTE ");
    break;
    case 27:
    printf(" Nome: DISTRITO FEDERAL \n Sigla: DF \n Capital: BRASILIA \n Regiao: CENTRO-OESTE ");
    break;
    default:
        printf("INEXISTENTE");
    }

    return 0;
}
