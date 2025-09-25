#include <stdio.h>

int main()
 {
    float original_price, gst_rate, gst_amount, total_amount;
    
    // Input original price
    printf("Enter the original price of the item: ");
    scanf("%f", &original_price);
    
    // Input GST rate
    printf("Enter the GST rate (in percentage, e.g., 18 for 18%): ");
    scanf("%f", &gst_rate);
    
    // Calculate GST amount
    gst_amount = original_price * (gst_rate / 100);
    
    // Calculate total amount including GST
    total_amount = original_price + gst_amount;
    
    // Display results
    printf("\nGST Calculation Summary:\n");
    printf("Original Price: %.2f\n", original_price);
    printf("GST Rate: %.2f%%\n", gst_rate);
    printf("GST Amount: %.2f\n", gst_amount);
    printf("Total Amount (including GST): %.2f\n", total_amount);
    
    return 0;
}
