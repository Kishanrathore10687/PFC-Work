#include <stdio.h>

// Function to show menu
void showMenu() 
{
    printf("\n------------------------------------------- RESTAURANT MENU -------------------------------------------\n");

    printf("\n========== INDIAN FOOD (VEG) ==========\n");
    printf("1. Paneer Tikka Masala - Rs.220\t2. Dal Makhani - Rs.180\n");
    printf("3. Palak Paneer - Rs.200\t4. Chole Bhature - Rs.150\n");
    printf("5. Veg Biryani - Rs.250\t\t6. Aloo Gobi - Rs.160\n");
    printf("7. Malai Kofta - Rs.230\t\t8. Rajma Chawal - Rs.170\n");
    printf("9. Mix Veg - Rs.140\t\t10. Butter Naan - Rs.50\n");

    printf("\n========== CHINESE FOOD (VEG) ==========\n");
    printf("11. Veg Manchurian - Rs.180\t12. Veg Hakka Noodles - Rs.160\n");
    printf("13. Veg Fried Rice - Rs.150\t14. Spring Rolls - Rs.120\n");
    printf("15. Gobi Manchurian - Rs.170\t16. Szechuan Vegetables - Rs.190\n");
    printf("17. Dim Sums (Veg) - Rs.200\t18. Sweet Corn Soup - Rs.100\n");
    printf("19. Veg Noodle Soup - Rs.110\t20. Chow Mein - Rs.140\n");

    printf("\n========== ITALIAN FOOD (VEG) ==========\n");
    printf("21. Margherita Pizza - Rs.300\t22. Veg Pasta - Rs.200\n");
    printf("23. Veg Lasagna - Rs.280\t24. Bruschetta - Rs.150\n");
    printf("25. Focaccia Bread - Rs.120\t26. Minestrone Soup - Rs.130\n");
    printf("27. Risotto - Rs.250\t\t28. Veg Calzone - Rs.220\n");
    printf("29. Caprese Salad - Rs.180\t30. Garlic Bread - Rs.90\n");

    printf("\n========== BEVERAGES ==========\n");
    printf("31. Coca Cola - Rs.50\t\t32. Pepsi - Rs.50\n");
    printf("33. Fresh Lime Soda - Rs.60\t34. Mango Shake - Rs.80\n");
    printf("35. Coffee - Rs.70\n");

    printf("\n========== DESSERTS ==========\n");
    printf("36. Gulab Jamun - Rs.100\t37. Ice Cream - Rs.120\n");
    printf("38. Chocolate Cake - Rs.150\t39. Gajar Halwa - Rs.130\n");
    printf("40. Brownie - Rs.140\n");

    printf("---------------------------------------------------------------------------------------------------------\n");
}

// Function to get price
int getPrice(int item)
{
    switch(item)
    {
        case 1: return 220;
        case 2: return 180;
        case 3: return 200;
        case 4: return 150;
        case 5: return 250;
        case 6: return 160;
        case 7: return 230;
        case 8: return 170;
        case 9: return 140;
        case 10: return 50;
        case 11: return 180;
        case 12: return 160;
        case 13: return 150;
        case 14: return 120;
        case 15: return 170;
        case 16: return 190;
        case 17: return 200;
        case 18: return 100;
        case 19: return 110;
        case 20: return 140;
        case 21: return 300;
        case 22: return 200;
        case 23: return 280;
        case 24: return 150;
        case 25: return 120;
        case 26: return 130;
        case 27: return 250;
        case 28: return 220;
        case 29: return 180;
        case 30: return 90;
        case 31: return 50;
        case 32: return 50;
        case 33: return 60;
        case 34: return 80;
        case 35: return 70;
        case 36: return 100;
        case 37: return 120;
        case 38: return 150;
        case 39: return 130;
        case 40: return 140;
        default: return 0;
    }
}

// Main function
int main()
{
    int choice, qty;
    float total = 0, gst, discount, finalAmount;
    char more;

    char name[50];
    long long phone;

    printf("-------------------------------- Welcome to Khana Khazana Restaurant --------------------------------\n");

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your phone number: ");
    scanf("%lld", &phone);

    showMenu();

    do
    {
        printf("Enter item number: ");
        scanf("%d", &choice);

        if(getPrice(choice) == 0)
        {
            printf("Invalid item number! Please try again.\n");
            continue;
        }

        printf("Enter quantity: ");
        scanf("%d", &qty);

        total += getPrice(choice) * qty;

        printf("Add more items? (y/n): ");
        scanf(" %c", &more);

    } while(more == 'y' || more == 'Y');

    gst = total * 0.18;

    if(total > 500)
        discount = total * 0.10;
    else
        discount = 0;

    finalAmount = total + gst - discount;

    printf("\n---------------------------- BILL ----------------------------\n");
    printf("Customer Name : %s\n", name);
    printf("Phone Number  : %lld\n", phone);
    printf("Total Amount  : Rs. %.2f\n", total);
    printf("GST (18%%)     : Rs. %.2f\n", gst);
    printf("Discount      : Rs. %.2f\n", discount);
    printf("--------------------------------------------------------------\n");
    printf("Final Amount  : Rs. %.2f\n", finalAmount);
    printf("--------------------------------------------------------------\n");
    printf("Thank You! Visit Again\n");

    return 0;
}
