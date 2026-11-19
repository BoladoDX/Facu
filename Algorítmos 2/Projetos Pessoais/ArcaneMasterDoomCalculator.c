#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    float dex, in, vctp, fctp;
    float fcts;
    float total_vct;
    float bolt_vct, bolt_fct;
    float aoe_vct, aoe_fct;
    float bolt_total_ct, aoe_total_ct;


    while(1)
    {
        bolt_vct = 7, bolt_fct = 0.75;
        aoe_vct = 5, aoe_fct = 2.3;
        
        printf("\n=~= VCT & FCT Calculator for Arcane Masters =~=\n");
        printf("1 - Start Calculator\n0 - Stop\nMake a choice: ");
        scanf("%d", &n);

        switch(n)
        {
            case 1:
            {
                printf("\n=~= BEGIN CALCULATOR =~=\n");
                printf("Skills for reference:\n1 - Bolts\nVCT = 7 sec\nFCT = 0.75 sec\nTotal Cast Time = 7.75 sec\n");
                printf("2 - AOE's\nVCT = 5 sec\nFCT = 2.3 sec\nTotal Cast Time = 7.3 sec\n");
                printf("\nType the amount of DEX and INT respectively (E.g.: 100 120): ");
                scanf("%f %f", &dex, &in);

                total_vct = (sqrt(((dex * 2) + in) / 400) * 100);
                if(total_vct >= 100)
                {
                    total_vct = 100;
                }

                printf("\nType the percent amount of VCT and FCT respectively (E.g.: 50 25): ");
                scanf("%f %f", &vctp, &fctp);

                if(total_vct != 100)
                {
                    total_vct += ((100 - total_vct) * (vctp / 100));
                }

                printf("\nNow type the amount of FCT in seconds (E.g.: 0.5): ");
                scanf("%f", &fcts);

                bolt_vct *= ((100 - total_vct) / 100);
                bolt_fct *= ((100 - fctp) / 100);
                bolt_fct -= fcts;
                if(bolt_fct <= 0)
                {
                    bolt_fct = 0;
                }


                aoe_vct *= ((100 - total_vct) / 100);
                aoe_fct *= ((100 - fctp) / 100);
                aoe_fct -= fcts;
                if(aoe_fct <= 0)
                {
                    aoe_fct = 0;
                }

                printf("\n\n=~= RESULTS =~=\n");
                printf("Total VCT = %.2f percent\nTotal FCT = %.0f percent + %.2f sec\n", total_vct, fctp, fcts);
                printf("===~~~~~~~~~~~===\n");
                printf("1 - Bolts\nTotal VCT = %.2f sec\nTotal FCT = %.2f sec\nTotal Cast Time = %.2f sec\n", bolt_vct, bolt_fct, (bolt_vct + bolt_fct));
                printf("2 - AOE's\nTotal VCT = %.2f sec\nTotal FCT = %.2f sec\nTotal Cast Time = %.2f sec\n", aoe_vct, aoe_fct, (aoe_vct + aoe_fct));
                
                break;
            }

            case 0:
            {
                return 0;
            }

            default:
            {
                printf("\nPlease select a valid option.\n");
            }
        }
    }

    return 0;
}