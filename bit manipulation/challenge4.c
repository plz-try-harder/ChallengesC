#include <stdio.h>
#include <string.h>

typedef struct onscreen_box{
    
    
    unsigned int oot:1; // opaque or transparent
    unsigned int fill_color:3; // 8 colors
    unsigned int :4;
    unsigned int border:1; // shown or hidden
    unsigned int border_color:3; // 8 colors
    unsigned int style:2; //solid dotted or dashed
    unsigned int :2;
}onscreen_box;

onscreen_box box1= {0,2,1,1,0};
char fill_color[20], border[20], oot[20], border_color[20], style[20];

void set_values(){
    //opaque or transparent oot
    if(box1.oot)
        strcpy(oot, "Opaque");
    else 
        strcpy(oot, "transparent");

    // fill color
    switch (box1.fill_color){
        case 0 : strcpy(fill_color, "black");
        break;
        case 1 : strcpy(fill_color, "red");
        break;
        case 2 : strcpy(fill_color, "green");
        break;
        case 3 : strcpy(fill_color, "yellow");
        break;
        case 4 : strcpy(fill_color, "blue");
        break;
        case 5 : strcpy(fill_color, "magneta");
        break;
        case 6 : strcpy(fill_color, "cyan");
        break;
        case 7 : strcpy(fill_color, "white");
        break;
    }
    // border or not
    if(box1.border)
        strcpy(border, "Shown");
    else
        strcpy(border, "Hidden");
    // border color
    switch(box1.border_color){
        case 0 : strcpy(border_color, "black");
        break;
        case 1 : strcpy(border_color, "red");
        break;
        case 2 : strcpy(border_color, "green");
        break;
        case 3 : strcpy(border_color, "yellow");
        break;
        case 4 : strcpy(border_color, "blue");
        break;
        case 5 : strcpy(border_color, "magneta");
        break;
        case 6 : strcpy(border_color, "cyan");
        break;
        case 7 : strcpy(border_color, "white");
        break;
    }
    // style
    switch(box1.style){
        case 0: strcpy(style, "solid");
        break;
        case 1: strcpy(style, "dotted");
        break;
        case 2: strcpy(style , "dashed");
        break;
    }
}

void print_values(){
    printf("You box is %s, and its fill color is %s.\nThe borders are %s and in %s with a %s style.\n", oot,
    fill_color, border,border_color,style );
}

int main(){
    
    set_values();
    print_values();
    printf("%ld\n", sizeof(box1));
}