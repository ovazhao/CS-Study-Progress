# include <stdio.h>
# define YEARS 5
# define MONTHS 12
void calculate_yearly_totals(const float rainfall[YEARS][MONTHS], float yearly_totals[YEARS]);
void calculate_monthly_averages(const float rainfall[YEARS][MONTHS], float monthly_averages[MONTHS]);
void print_yearly_report(float yearly_totals[YEARS],const char *years[YEARS]);
void print_monthly_report(const char *months[MONTHS],float monthly_averages[MONTHS]);
int main (void){
    const char *years[YEARS] = {"2010", "2011", "2012", "2013", "2014"};
    const char *months[MONTHS] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    const float rain[YEARS][MONTHS] =
    {
        { 4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6 },
        { 8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3 },
        { 9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4 },
        { 7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2 },
        { 7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2 }
    };
    float yearly_totals[YEARS]={0.0};
    float monthly_averages[MONTHS]={0.0};
    calculate_yearly_totals(rain,yearly_totals);
    calculate_monthly_averages(rain,monthly_averages);
    print_yearly_report(yearly_totals, years);
    printf("\n");
    print_monthly_report(months,monthly_averages);

return 0;
}
void calculate_yearly_totals(const float rainfall[YEARS][MONTHS], float yearly_totals[YEARS]){
    float sum_of_year = 0.0f;
    for (int year = 0; year < YEARS; year++){
        for (int month = 0; month < MONTHS; month++){
            sum_of_year += rainfall[year][month];
        }
        yearly_totals[year] = sum_of_year;
        sum_of_year = 0.0;
    }
}

void calculate_monthly_averages(const float rainfall[YEARS][MONTHS], float monthly_averages[MONTHS]){
    float avg_of_month = 0.0f;
    for (int month = 0; month < MONTHS; month++){
        for (int year = 0; year < YEARS; year++){
            avg_of_month += rainfall[year][month];
        }
        monthly_averages[month] = avg_of_month/YEARS;
        avg_of_month = 0.0;
    }
}

void print_yearly_report(float yearly_totals[YEARS],const char *years[YEARS]){
    printf("%4s%22s\n","YEAR","    RAINFALL  (inches)");
    float avg_of_year = 0.0f;
    for (int year = 0; year < YEARS; year++){
        avg_of_year += yearly_totals[year];
        printf("%4s%18.1f\n",years[year],yearly_totals[year]);
    }
    avg_of_year /= YEARS;
    printf("\n");
    printf("The yearly average is %.1f inches.\n",avg_of_year);
}
void print_monthly_report(const char *months[MONTHS],float monthly_averages[MONTHS]){
    
    printf("MONTHLY AVERAGES:\n");
    printf("\n");
    for (int month = 0; month < MONTHS; month++){
        printf("%6s",months[month]);
    }
    printf("\n");
    for (int month = 0; month < MONTHS; month++){
        printf("%6.1f",monthly_averages[month]);
    }
}
