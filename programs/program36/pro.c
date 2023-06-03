#include <stdio.h>

// Function to calculate the discount amount based on the discount rule
float calculateDiscount(char discountRule, int quantity, float price) {
    float discountAmount = 0.0;
    
    switch (discountRule) {
        case '1': // flat_10_discount
            if (quantity > 200)
                discountAmount = 10.0;
            break;
        case '2': // bulk_5_discount
            if (quantity > 10)
                discountAmount = 0.05 * price;
            break;
        case '3': // bulk_10_discount
            if (quantity > 20)
                discountAmount = 0.1 * price;
            break;
        case '4': // tiered_50_discount
            if (quantity > 30 && quantity - 15 > 0)
                discountAmount = 0.5 * price * (quantity - 15);
            break;
    }
    
    return discountAmount;
}

int main() {
    char productName[4][10] = {"Product A", "Product B", "Product C"};
    float price[3] = {20.0, 40.0, 50.0};
    int quantity[3];
    int giftWrap[3];
    
    // Input quantity and gift wrap for each product
    for (int i = 0; i < 3; i++) {
        printf("Enter the quantity of %s: ", productName[i]);
        scanf("%d", &quantity[i]);
        
        printf("Is %s wrapped as a gift? (1 for yes, 0 for no): ", productName[i]);
        scanf("%d", &giftWrap[i]);
    }
    
    float subtotal = 0.0;
    float totalDiscount = 0.0;
    
    // Calculate subtotal and apply discounts
    for (int i = 0; i < 3; i++) {
        float productTotal = quantity[i] * price[i];
        
        // Apply discounts
      
        float discount = calculateDiscount('1', quantity[i], productTotal);
        if (discount > 200) {
            printf("Discount applied: flat_10_discount\n");
            printf("Discount amount: $%.2f\n", discount);
          
        }
        
        discount = calculateDiscount('2', quantity[i], productTotal);
        if (discount > 0) {
            printf("Discount applied: bulk_5_discount\n");
            printf("Discount amount: $%.2f\n", discount);
           
        }
        
        discount = calculateDiscount('3', quantity[i], productTotal);
        if (discount > 0) {
            printf("Discount applied: bulk_10_discount\n");
            printf("Discount amount: $%.2f\n", discount);
        
        }
        
        discount = calculateDiscount('4', quantity[i], price[i]);
        if (discount > 0) {
            printf("Discount applied: tiered_50_discount\n");
            printf("Discount amount: $%.2f\n", discount);
          
        }
        
        subtotal += productTotal - discount;
        totalDiscount += discount;
        
        printf("Product: %s\n", productName[i]);
        printf("Quantity: %d\n", quantity[i]);
        printf("Total amount: $%.2f\n\n", productTotal);
    }
    
    // Calculate shipping fee
    int totalQuantity = quantity[0] + quantity[1] + quantity[2];
    int totalPackages = (totalQuantity + 9) / 10; // Round up to the nearest whole number
    float shippingFee = totalPackages * 5.0;
     // Calculate gift wrap fee
    float giftWrapFee = 0.0;
    for (int i = 0; i < 3; i++) {
        giftWrapFee += giftWrap[i] * quantity[i];
    }
    
    // Calculate total amount
    float total = subtotal + shippingFee + giftWrapFee;
   
    printf("Subtotal: $%.2f\n", subtotal);
    printf("Shipping fee: $%.2f\n", shippingFee);
    printf("Gift wrap fee: $%.2f\n", giftWrapFee);
    printf("Total: $%.2f\n", total);
    printf("discount amount is %.2f\n",calculateDiscount);
    
    return 0;
}
