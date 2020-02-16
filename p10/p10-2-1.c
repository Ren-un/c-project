void decrement_date(int* y, int* m, int* d) {
    *d -= 1;

    if (*d == 0) {
        *m -= 1;
        
        if (*m == 1 || *m == 3 || *m == 5 || *m == 7 || *m == 10 || *m == 8 ||* m == 0) {
            *d = 31;
            
        }
        if (*m == 2) {
            *d = 28; 
            if (*y % 4 == 0) {
                *d = 29;
            }
        }

        else
            *d = 30;
        if (*m == 0) {
            *m = 12;
            *y -= 1;
        }

    }
    
}