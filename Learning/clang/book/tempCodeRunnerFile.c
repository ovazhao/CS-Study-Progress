case 11:
                printf("This is for converting decimal to any base(from 2 to 9).\n");
                printf("Give me the Decimal:");
                scanf("%d",&decimal);
                printf("Give me the base(from 2 to 9):\n");
                while ((status = (scanf("%d",&base) == 0))||(base<2)||(base>9)){
                    if(status == 0){
                        scanf("%*s");
                    }else{
                        printf("Please enter a base within range.\n");
                    }
                };
                printf("The result converting %d to base %d is ", decimal, base);
                power(decimal,base);
                printf("\n");
                break;