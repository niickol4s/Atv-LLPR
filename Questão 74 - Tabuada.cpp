#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    int result;
    
    for(int tab = 1; tab <= 10; tab++) {
        for(int mult = 1; mult <= 10; mult++) {
            result = mult * tab;
            printf("%d x %d = %d\n\n", mult, tab, result);
        }
    }
    
    return 0;
}
