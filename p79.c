#include <stdio.h>
int main()
{
    int n =3;
    int asif_er_gf[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &asif_er_gf[i]);
    }

    int num_of_gf_asif = 0;
    for(int i=0; i<n; i++)
    {
        if(i == 0)
            num_of_gf_asif++;
        else
            if(asif_er_gf[i] != asif_er_gf[i-1])
                num_of_gf_asif++;
    }

    printf("Number of Mahdi's vabis and,\nAsif's gf: %d", num_of_gf_asif++);
    return 0;
}