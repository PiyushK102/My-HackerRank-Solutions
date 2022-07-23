


float area(triangle tr) {
    float p = (tr.a+tr.b+tr.c)/2.0;
    return sqrt(p*(p-tr.a)*(p-tr.b)*(p-tr.c));
}
void sort_by_area(triangle* tr, int n) {
    triangle temp;
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (area(tr[i])>area(tr[j])) {
                temp = tr[i];
                tr[i] = tr[j];
                tr[j] = temp;
            }
        }
    }
}

