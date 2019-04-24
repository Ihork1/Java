#include <stdio.h>
#include <stdlib.h>

void give_alcohol_to_customer();
void say_bye();
void give_martini_to_customer();

int main()
{
    printf("Hi,What do you want from me?\n");
    printf("1 - Vodka is what i want\n");
    printf("2 - Martini give me fast");



    int product_type;
    scanf("%d", &product_type);

    if(1 == product_type){
        printf("Nice chose\n");
        give_vodka_to_customer();
        say_bye();
    }else if(2 == product_type){
    printf("Nice chose\n");
    give_martini_to_customer();
    say_bye();
    }


    return 0;
}
void give_vodka_to_customer(){
    printf("Here is your vodka.Enjoy and don`t drink a lot\n");
}
void give_martini_to_customer(){
    printf("Here is martini. Drink carefully\n");
}
void say_bye(){
    printf("Bye bye");
}
