
void sort_by_area(triangle* tr, int n) {
double p_1,p_2;
triangle temb;
    int i, j;
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++)
        {
            p_1=(tr[j].a+tr[j].b+tr[j].c)/2.0;
            p_2=(tr[j+1].a+tr[j+1].b+tr[j+1].c)/2.0;
            if (sqrt(p_1*(p_1-tr[j].a)*(p_1-tr[j].b)*(p_1-tr[j].c))>sqrt(p_2*(p_2-tr[j+1].a)*(p_2-tr[j+1].b)*(p_2-tr[j+1].c))) {
            temb=tr[j];
            tr[j]=tr[j+1];
            tr[j+1]=temb;

            }
        }
    }
}
