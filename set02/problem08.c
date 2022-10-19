typedef struct _camel {
    float radius, height, length, weight;
} Camel;

void input(int n, Camel c[n], float *truck_weight);
void find_camel_weight(int n, Camel c[n]);
float compute_total_weight(int n, Camel c[n], float truck_weight);
void output(float total_weight);


void input(int n, Camel c[n], float *truck_weight)
{
  printf("Enter the number of camels\n");
  scanf("%d", &n);
  
}