#include<bits/stdc++.h>
using namespace std;

	struct node{
    	char data[20];
    	float amount;
    	int quan;
   	struct node *next; 
	};
	
    node *head=NULL;
    float a=0,c=0;
    int b=0;
    void categories();
    void display();
	
void insert(char x[20],float y,int z){
    node *ptr;
    ptr = new node;
    strcpy(ptr->data,x);
    ptr->amount=y;
    ptr->quan=z;
    ptr->next = NULL;
     if(head == NULL){
        head = ptr;
    }
     else{
        node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next= ptr;
     }
} 

void del(){
	int n;
	printf("\t\tEnter 0 for exit.\n");
	for(int i=0;i<10;i++){
		display();
printf("\t\tPress no for remove : ");
scanf("%d", &n);
if(n==0){
	return;
}
	if(n==1){
		node*ptr1;
   		ptr1=head;
		head=head->next;
		delete ptr1;
	}
    else{
    node *ptr,*temp=head,*temp2;
    int i;
    for(i=2;i<n;i++){
        temp=temp->next;
    }
    ptr=temp->next;
    temp2=ptr->next;
    temp->next=temp2;
    delete ptr;
	}
}
}
void total(){
    node *temp=head;
    int i = 0;
    printf("\n");
    printf("\t\t\t    Item      price\n");
    printf("\t\t\t-----------------------------\n");
    while(temp!= NULL){
    	i++;
    	c=temp->amount*temp->quan;
        printf("\t\t\t%d. %s x (%d) = %.2f Tk",i,temp->data,temp->quan,c);
    	b=temp->quan;
    	a=a+temp->amount*b;
        temp=temp->next;
        printf("\n");
    }
    	i=0;
        float t;
        t=(a/100)*5;
		printf("\t\t\t-----------------------------\n");
		printf("\t\t\tGross amount: %.2f\n",a);
		printf("\t\t\tVat(5%)     : %.2f\n",t);
		printf("\t\t\tNet amount  : %.2f\n\n",a+t);
		a=0;
    printf("\n");
}
void display(){
    node *temp=head;
    int i=0;
    while(temp!=NULL){
    	i++;
    	c=temp->amount*temp->quan;
        printf("\t\t\t%d. %s x (%d) = %.2f Tk",i,temp->data,temp->quan,c);
        temp=temp->next;
        printf("\n");
    }
    printf("\n");
    i=0;
}
void item(){
	printf("\n\t\t1. Fresh Goods.\n");
	printf("\t\t2. Frozen.\n");
	printf("\t\t3. Dairy.\n");
	printf("\t\t4. Condiments/Spices.\n");
	printf("\t\t5. Snackes.\n");
	printf("\t\t6. Grains.\n\n");
}

void fresh_item(){
	printf("\n\t\t\t1.  Potatoes........(1kg) = 29 Tk\n");
	printf("\t\t\t2.  Onion...........(1kg) = 75 Tk\n");
	printf("\t\t\t3.  Garlic..........(1kg) = 159 Tk\n");
	printf("\t\t\t4.  Tomatoes........(1kg) = 25 Tk\n");
	printf("\t\t\t5.  Carrots.........(1kg) = 45 Tk\n");
	printf("\t\t\t6.  Cucumber........(1kg) = 49 Tk\n");
	printf("\t\t\t7.  Capsicum........(1kg) = 119 Tk\n");
	printf("\t\t\t8.  Pumpkin.......(1 pcs) = 45 Tk\n");
	printf("\t\t\t9.  Cabbage.......(1 pcs) = 35 Tk\n");
	printf("\t\t\t10. Cauliflower...(1 pcs) = 39 Tk\n");
	printf("\t\t\t11. Green chili...(500gm) = 25 Tk\n");
	printf("\t\t\t12. Ladies fingers(500gm) = 32 Tk\n");
	printf("\t\t\t13. Egg-plant.......(1kg) = 45 Tk\n");
	printf("\t\t\t14. Gourd.........(1 pcs) = 49 Tk\n");
	printf("\t\t\t15. Radish........(500gm) = 25 Tk\n");
	printf("\t\t\t16. Coriander.....(250gm) = 19 Tk\n");
	printf("\t\t\t17. Baby corn.....(550gm) = 79 Tk\n\n");
}

void fresh(){
	fresh_item();
	int n,z;
	printf("\t\t\tPress 0 for stop adding.\n");
	for(int i=0;i<20;i++){
printf("\t\t\tPress no for add item to cart : ");
scanf("%d", &n);
if(n!=0){
	printf("\t\t\tQuantity: ");
	scanf("%d", &z);
}
if(n==0){
	return categories();
	}
	else{
		switch(n){
		case 1:
			insert("Potatoes",29,z);
			printf("\t\t\t\tPotatoes is added to your cart\n");
			break;
		case 2:
			insert("Onion",75,z);
			printf("\t\t\t\tOnion is added to your cart\n");
			break;
		case 3:
			insert("Garlic",159,z);
			printf("\t\t\t\tGarlic is added to your cart\n");
			break;
		case 4:
			insert("Tomatoes",25,z);
			printf("\t\t\t\tTomatoes is added to your cart\n");
			break;
		case 5:
			insert("Carrots",45,z);
			printf("\t\t\t\tCarrots is added to your cart\n");
			break;
		case 6:
			insert("Cucumber",49,z);
			printf("\t\t\t\tCucumber is added to your cart\n");
			break;
		case 7:
			insert("Capsicum",119,z);
			printf("\t\t\t\tCapsicum is added to your cart\n");
			break;
		case 8:
			insert("Pumpkin",45,z);
			printf("\t\t\t\tPumpkin is added to your cart\n");
			break;
		case 9:
			insert("Cabbage",35,z);
			printf("\t\t\t\tCapsicum is added to your cart\n");
			break;
		case 10:
			insert("Cauliflower",39,z);
			printf("\t\t\t\tCauliflower is added to your cart\n");
			break;
		case 11:
			insert("Green chili",25,z);
			printf("\t\t\t\tGreen chili is added to your cart\n");
			break;
		case 12:
			insert("Ladies fingers",32,z);
			printf("\t\t\t\tLadies fingers is added to your cart\n");
			break;
		case 13:
			insert("Egg-plant",45,z);
			printf("\t\t\t\tEgg-plant is added to your cart\n");
			break;
		case 14:
			insert("Gourd",49,z);
			printf("\t\t\t\tGourd is added to your cart\n");
			break;
		case 15:
			insert("Radish",25,z);
			printf("\t\t\t\tRadish is added to your cart\n");
			break;
		case 16:
			insert("Coriander",19,z);
			printf("\t\t\t\tCoriander is added to your cart\n");
			break;
		case 17:
			insert("Baby corn",79,z);
			printf("\t\t\t\tBaby corn is added to your cart\n");
			break;
		default:
			printf("\t\t\t\tInvalid choice \n");
		}
	}
}
}

void frozen_item(){
	printf("\n\t\t\t1. Chicken........(1kg) = 139 Tk\n");
	printf("\t\t\t2. Beef...........(1kg) = 449 Tk\n");
	printf("\t\t\t3. Mutton.........(1kg) = 549 Tk\n");
	printf("\t\t\t4. Shrimp.........(1kg) = 399 Tk\n");
	printf("\t\t\t5. Hilsa..........(1kg) = 699 Tk\n");
	printf("\t\t\t6. Mutton Brain.(2 pcs) = 135 Tk\n");
	printf("\t\t\t7. Cow liver....(500gm) = 299 Tk\n");
	printf("\t\t\t8. Beef keema.....(1kg) = 925 Tk\n");
	printf("\t\t\t9. Quail meat...(4 pcs) = 165 Tk\n\n");
}

void frozen(){
	frozen_item();
	int n,z;
	printf("\t\t\tPress 0 for stop adding.\n");
	for(int i=0;i<20;i++){
printf("\t\t\tPress no for add item to cart : ");
scanf("%d", &n);
if(n!=0){
	printf("\t\t\tQuantity: ");
	scanf("%d", &z);
}
if(n==0){
	return categories();
	}
	else{
		switch(n){
		case 1:
			insert("Chicken",139,z);
			printf("\t\t\t\tChicken is added to your cart\n");
			break;
		case 2:
			insert("Beef",449,z);
			printf("\t\t\t\tBeef is added to your cart\n");
			break;
		case 3:
			insert("Mutton",549,z);
			printf("\t\t\t\tMutton is added to your cart\n");
			break;
		case 4:
			insert("Shrimp",399,z);
			printf("\t\t\t\tShrimp  is added to your cart\n");
			break;
		case 5:
			insert("Hilsa",699,z);
			printf("\t\t\t\tHilsa  is added to your cart\n");
			break;
		case 6:
			insert("Mutton Brain",135,z);
			printf("\t\t\t\tMutton Brain is added to your cart\n");
			break;
		case 7:
			insert("Cow liver",299,z);
			printf("\t\t\t\tCow liver is added to your cart\n");
			break;
		case 8:
			insert("Beef keema",925,z);
			printf("\t\t\t\tBeef keema  is added to your cart\n");
			break;
		case 9:
			insert("Quail meat",165,z);
			printf("\t\t\t\tQuail meat  is added to your cart\n");
			break;
		default:
			printf("\t\t\t\tInvalid choice \n");
		}
	}
}
}
void dairy_item(){
	printf("\n\t\t\t1. Butter.(150gm) = 120 Tk\n");
	printf("\t\t\t2. Milk...(1 ltr) = 70 Tk\n");
	printf("\t\t\t3. Cheese.(200gm) = 150 Tk\n");
	printf("\t\t\t4. Yogurt.(500gm) = 90 Tk\n");
	printf("\t\t\t5. Cream..(500gm) = 280 Tk\n\n");
}

void dairy(){
	dairy_item();
	int n,z;
	printf("\t\t\tPress 0 for stop adding.\n");
	for(int i=0;i<20;i++){
printf("\t\t\tPress no for add item to cart : ");
scanf("%d", &n);
if(n!=0){
	printf("\t\t\tQuantity: ");
	scanf("%d", &z);
}
if(n==0){
	return categories();
	}
	else{
		switch(n){
		case 1:
			insert("Butter",120,z);
			printf("\t\t\t\tButter is added to your cart\n");
			break;
		case 2:
			insert("Milk",70,z);
			printf("\t\t\t\tMilk is added to your cart\n");
			break;
		case 3:
			insert("Cheese",150,z);
			printf("\t\t\t\tCheese is added to your cart\n");
			break;
		case 4:
			insert("Yogurt",90,z);
			printf("\t\t\t\tYogurt is added to your cart\n");
			break;
		case 5:
			insert("Cream",280,z);
			printf("\t\t\t\tCream is added to your cart\n");
			break;
		default:
			printf("\t\t\t\tInvalid choice \n");
		}
	}
}
}
void spice_item(){
	printf("\n\t\t\t1. Black Pepper...(50gm)  = 49 Tk\n");
	printf("\t\t\t2. Chili Powder...(200gm) = 39 Tk\n");
	printf("\t\t\t3. Cumin..........(100gm) = 49 Tk\n");
	printf("\t\t\t4. Garlic Powder..(100gm) = 29 Tk\n");
	printf("\t\t\t5. Ketchup.......(500gm)  = 279 Tk\n");
	printf("\t\t\t6. Mustard........(250gm) = 139 Tk\n");
	printf("\t\t\t7. salt.............(1kg) = 39 Tk\n");
	printf("\t\t\t8. Cinnamon.......(100gm) = 49 Tk\n");
	printf("\t\t\t9. Cardamom.......(250gm) = 149 Tk\n");
	printf("\t\t\t10. Bay leaves....(100gm) = 19 Tk\n");
	printf("\t\t\t11. Cloves........(50gm)  = 59 Tk\n\n");
}

void spice(){
	spice_item();
	int n,z;
	printf("\t\t\tPress 0 for stop adding.\n");
	for(int i=0;i<20;i++){
printf("\t\t\tPress no for add item to cart : ");
scanf("%d", &n);
if(n!=0){
	printf("\t\t\tQuantity: ");
	scanf("%d", &z);
}
if(n==0){
	return categories();
	}
	else{
		switch(n){
		case 1:
			insert("Black Pepper",49,z);
			printf("\t\t\t\tBlack Pepper is added to your cart\n");
			break;
		case 2:
			insert("Chili Powder",39,z);
			printf("\t\t\t\tChili Powder is added to your cart\n");
			break;
		case 3:
			insert("Cumin",49,z);
			printf("\t\t\t\tCumin is added to your cart\n");
			break;
		case 4:
			insert("Garlic Powder",29,z);
			printf("\t\t\t\tGarlic Powder is added to your cart\n");
			break;
		case 5:
			insert("Ketchup",279,z);
			printf("\t\t\t\tKetchup is added to your cart\n");
			break;
		case 6:
			insert("Mustard",139,z);
			printf("\t\t\t\tMustard is added to your cart\n");
			break;
		case 7:
			insert("Salt",39,z);
			printf("\t\t\t\tSalt is added to your cart\n");
			break;
		case 8:
			insert("Cinnamon",49,z);
			printf("\t\t\t\tCinnamon is added to your cart\n");
			break;
		case 9:
			insert("Cardamom",149,z);
			printf("\t\t\t\tCardamom is added to your cart\n");
			break;
		case 10:
			insert("Bay leaves",19,z);
			printf("\t\t\t\tBay leaves is added to your cart\n");
			break;
		case 11:
			insert("Cloves",59,z);
			printf("\t\t\t\tCloves is added to your cart\n");
			break;
		default:
			printf("\t\t\t\tInvalid choice \n");
		}
	}
}
}
void snack_item(){
	printf("\n\t\t\t1. Crackers..(1 pck) = 120 Tk\n");
	printf("\t\t\t2. Nuts......(1 pck) = 100 Tk\n");
	printf("\t\t\t3. Oats......(1 pck) = 120 Tk\n");
	printf("\t\t\t4. Popcorn...(1 pck) = 40 Tk\n");
	printf("\t\t\t5. Chips.....(1 pck) = 45 Tk\n");	
	printf("\t\t\t6. Noodles...(1 pck) = 140 Tk\n");
	printf("\t\t\t7. Soups.....(1 pck) = 40 Tk\n");
	printf("\t\t\t8. Biscuit...(1 pck) = 60 Tk\n");
	printf("\t\t\t9. Chocolate.(1 pck) = 150 Tk\n\n");
}

void snack(){
	snack_item();
	int n,z;
	printf("\t\t\tPress 0 for stop adding.\n");
	for(int i=0;i<20;i++){
printf("\t\t\tPress no for add item to cart : ");
scanf("%d", &n);
if(n!=0){
	printf("\t\t\tQuantity: ");
	scanf("%d", &z);
}
if(n==0){
	return categories();
	}
	else{
		switch(n){
		case 1:
			insert("Crackers",120,z);
			printf("\t\t\t\tCrackers  is added to your cart\n");
			break;
		case 2:
			insert("Nuts",100,z);
			printf("\t\t\t\tNuts is added to your cart\n");
			break;
		case 3:
			insert("Oats",120,z);
			printf("\t\t\t\tOats is added to your cart\n");
			break;
		case 4:
			insert("Popcorn",40,z);
			printf("\t\t\t\tPopcorn is added to your cart\n");
			break;
		case 5:
			insert("Chips",45,z);
			printf("\t\t\t\tChips is added to your cart\n");
			break;
		case 6:
			insert("Noodles",140,z);
			printf("\t\t\t\tNoodles is added to your cart\n");
			break;
		case 7:
			insert("Soups",40,z);
			printf("\t\t\t\tSoups is added to your cart\n");
			break;
		case 8:
			insert("Biscuit",60,z);
			printf("\t\t\t\tBiscuit is added to your cart\n");
			break;
		case 9:
			insert("Chocolate",150,z);
			printf("\t\t\t\tChocolate is added to your cart\n");
			break;
		default:
			printf("\t\t\t\tInvalid choice \n");
		}
	}
}
}
void grain_item(){
	printf("\n\t\t\t1. Breadcrumbs.(100gm) = 35 Tk\n");
	printf("\t\t\t2. Rice..........(1kg) = 65 Tk\n");
	printf("\t\t\t3. Wheat Bread.(1 pck) = 40 Tk\n");
	printf("\t\t\t4. Flour.........(1kg) = 45 Tk\n");
	printf("\t\t\t5. Pasta.......(1 pck) = 80 Tk\n");
	printf("\t\t\t6. Mugh dal......(1kg) = 100 Tk\n");
	printf("\t\t\t7. Masoor Dal....(1kg) = 120 Tk\n");
	printf("\t\t\t8. Corn Flour..(1 pcs) = 55 Tk\n\n");
}

void grain(){
	grain_item();
	int n,z;
	printf("\t\t\tPress 0 for stop adding.\n");
	for(int i=0;i<20;i++){
printf("\t\t\tPress no for add item to cart : ");
scanf("%d", &n);
if(n!=0){
	printf("\t\t\tQuantity: ");
	scanf("%d", &z);
}
if(n==0){
	return categories();
	}
	else{
		switch(n){
		case 1:
			insert("Breadcrumbs",35,z);
			printf("\t\t\t\tBreadcrumbs  is added to your cart\n");
			break;
		case 2:
			insert("Rice",65,z);
			printf("\t\t\t\tRice is added to your cart\n");
			break;
		case 3:
			insert("Wheat Bread",40,z);
			printf("\t\t\t\tWheat Bread is added to your cart\n");
			break;
		case 4:
			insert("Flour",45,z);
			printf("\t\t\t\tFlour is added to your cart\n");
			break;
		case 5:
			insert("Pasta",80,z);
			printf("\t\t\t\tPasta is added to your cart\n");
			break;
		case 6:
			insert("Mugh dal",100,z);
			printf("\t\t\t\tMugh dal is added to your cart\n");
			break;
		case 7:
			insert("Masoor Dal",120,z);
			printf("\t\t\t\tMasoor Dal is added to your cart\n");
			break;
		case 8:
			insert("Corn Flour",55,z);
			printf("\t\t\t\tCorn Flour is added to your cart\n");
			break;
		default:
			printf("\t\t\t\tInvalid choice \n");
		}
	}
}
}

void categories(){
	int n;
	item();
	printf("\t\tpress 0 for main menu.\n");
	printf("\t\tPress no for open category: ");
	scanf("%d", &n);
if(n==0){
	return;
	}
	else{
		switch(n){
		case 1:
			fresh();
			break;
		case 2:
			frozen();
			break;
		case 3:
			dairy();
			break;
		case 4:
			spice();
			break;
		case 5:
			snack();
			break;
		case 6:
			grain();
			break;
		default:
			printf("\t\t\tInvalid choice \n");
		}
	}
}

int main(){
	int n;
	printf("\n\t**Main Menu**\n");
	while(1){
		printf("\t1.Categories.\n");
		printf("\t2.Go to cart.\n");
		printf("\t3.Delete product.\n");
		printf("\t4.Check out.\n");
		printf("\t5.Quit.\n");
		printf("\tEnter your choice : ");
		scanf("%d", &n);
		if(n==1){
			categories();
		}
		if(n==2){
			display();
		}
		if(n==3){
			del();
		}
		if(n==4){
			total();
		}
		if(n==5){
			exit(1);		
		}
	}
}		

