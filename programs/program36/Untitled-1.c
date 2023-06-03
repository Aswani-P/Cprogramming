#include <stdio.h>

#define PRODUCT_A_PRICE 20
#define PRODUCT_B_PRICE 40
#define PRODUCT_C_PRICE 50
#define FLAT_10_DISCOUNT_THRESHOLD 200
#define BULK_5_DISCOUNT_THRESHOLD 10
#define BULK_5_DISCOUNT_PERCENTAGE 5
#define BULK_10_DISCOUNT_THRESHOLD 20
#define BULK_10_DISCOUNT_PERCENTAGE 10
#define TIERED_50_DISCOUNT_TOTAL_THRESHOLD 30
#define TIERED_50_DISCOUNT_SINGLE_THRESHOLD 15
#define TIERED_50_DISCOUNT_PERCENTAGE 50
#define GIFT_WRAP_FEE 1
#define SHIPPING_PACK_SIZE 10
#define SHIPPING_FEE 5

int main() {
    int quantityA, quantityB, quantityC;
    int giftWrapA = 0, giftWrapB = 0, giftWrapC = 0;
    int totalQuantity;
    int cartTotal;
    int discountAmount = 0;
    int shippingPackages;
    int shippingFee;
    int subtotal;
    int total;

    // Get quantities of each product and gift wrap options
    printf("Enter the quantity for Product A: ");
    scanf("%d", &quantityA);
    printf("Wrap Product A as a gift? (1 for Yes, 0 for No): ");
    scanf("%d", &giftWrapA);

    printf("Enter the quantity for Product B: ");
    scanf("%d", &quantityB);
    printf("Wrap Product B as a gift? (1 for Yes, 0 for No): ");
    scanf("%d", &giftWrapB);

    printf("Enter the quantity for Product C: ");
    scanf("%d", &quantityC);
    printf("Wrap Product C as a gift? (1 for Yes, 0 for No): ");
    scanf("%d", &giftWrapC);
    totalQuantity=total

   
}

