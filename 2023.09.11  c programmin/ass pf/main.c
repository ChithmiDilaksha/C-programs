#include <stdio.h>
#include <stdio.h>

// Function prototypes
void temperatureConverter();
void currencyConverter();
void massConverter();
void lengthConverter();
void volumeConverter();
void saveConversionHistory(char category, float input, float result);

int main()
{
    system("COLOR E0");
    int choice = 0;

    char category;

    printf("\t*-------------------------------------------------------------------------------------------------------------*\n");
    printf("\t|                             Welcome to the Unit Converter!-                                                 |\n");
    printf("\t*-------------------------------------------------------------------------------------------------------------*\n");
    printf("\n");
    printf("*Here is a list of conversions to choose from:\n\n");
    printf("-Temperature(T)\n-Currency(C)\n-Mass(M)\n-Length(L)\n-Volume(V)\n\n");
    printf("**Enter the letter you want to convert: ");
    scanf(" %c", &category);  // Notice the space before %c to consume any newline left in the input buffer.

    if (category == 'T'||category == 't')
        {
          temperatureConverter();
        }
        else if (category == 'C'||category == 'c')
          {
            currencyConverter();
          }
           else if (category == 'M'||category == 'm')
            {
               massConverter();
            }
             else if (category == 'L'||category == 'l')
             {
               lengthConverter();
             }
             else if (category == 'V'||category == 'v')
              {
                volumeConverter();
              }
               else
               {
                 printf("Please enter a valid choice.\n");
               }
    return 0;
}

void temperatureConverter()
{
    int tempChoice;
    float temperature, result;

    printf("\n");
    printf("Welcome to Temperature Converter!\n");
    printf("---------------------------------\n\n");
    printf("Here is a list of conversions to choose from:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Kelvin to Celsius\n");
    printf("4. Kelvin to Fahrenheit\n");
    printf("5. Celsius to Kelvin\n");
    printf("6. Fahrenheit to Kelvin\n\n");
    printf("-Enter your choice (1-6): ");
    scanf("%d", &tempChoice);

    printf("-Enter the temperature: ");
    scanf("%f", &temperature);

    switch (tempChoice)
    {
        case 1:
            result = (temperature * 9 / 5) + 32;
            printf("%.2f Celsius = %.2f Fahrenheit\n", temperature, result);
            break;
        case 2:
            result = (temperature - 32) * 5 / 9;
            printf("%.2f Fahrenheit = %.2f Celsius\n", temperature, result);
            break;
        case 3:
            result = temperature - 273.15;
            printf("%.2f Kelvin = %.2f Celsius\n", temperature, result);
            break;
        case 4:
            result = (temperature - 273.15) * 9 / 5 + 32;
            printf("%.2f Kelvin = %.2f Fahrenheit\n", temperature, result);
            break;
        case 5:
            result = temperature + 273.15;
            printf("%.2f Celsius = %.2f Kelvin\n", temperature, result);
            break;
        case 6:
            result = (temperature - 32) * 5 / 9 + 273.15;
            printf("%.2f Fahrenheit = %.2f Kelvin\n", temperature, result);
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    // Save conversion history to file
    saveConversionHistory('T', temperature, result);
}

 void currencyConverter()
 {
    int currencyChoice;
    float amount, result;

    printf("\n");
    printf("Welcome to Currency Converter!\n");
    printf("---------------------------------\n");
    printf("**Here is a list of conversions to choose from:\n\n");
    printf("1. USD to EUR\n");
    printf("2. USD to JPY\n");
    printf("3. USD to AUD\n");
    printf("4. EUR to USD\n");
    printf("5. JPY to USD\n");
    printf("6. AUD to USD\n\n");
    printf("-Enter your choice (1-6): ");
    scanf("%d", &currencyChoice);

    printf("Enter the amount: ");
    scanf("%f", &amount);

 switch (currencyChoice)
 {
        case 1:
            result = amount * 0.85;
            printf("%.2f USD = %.2f EUR\n", amount, result);
            break;
        case 2:
            result = amount * 110.5;
            printf("%.2f USD = %.2f JPY\n", amount, result);
            break;
        case 3:
            result = amount * 1.36;
            printf("%.2f USD = %.2f AUD\n", amount, result);
            break;
        case 4:
            result = amount * 1.18;
            printf("%.2f EUR = %.2f USD\n", amount, result);
            break;
        case 5:
            result = amount * 0.0091;
            printf("%.2f JPY = %.2f USD\n", amount, result);
            break;
        case 6:
            result = amount * 0.74;
            printf("%.2f AUD = %.2f USD\n", amount, result);
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    // Save conversion history to file
    saveConversionHistory('C', amount, result);
 }

 void massConverter()
 {
      int massChoice;
    float weight, result;

    printf("\n");
    printf("Welcome to Mass Converter!\n");
    printf("---------------------------------\n");
    printf("Here is a list of conversions to choose from:\n");
    printf("1. Kilogram to Ton\n");
    printf("2. Kilogram to Pound\n");
    printf("3. Gram to Ounce\n");
    printf("4. Milligram to Ounce\n");
    printf("5. Ounce to Milligram\n");
    printf("6. Ounce to Gram\n");
    printf("7. Pound to Kilogram\n");
    printf("8. Ton to Kilogram\n");
    printf("9. Gram to Kilogram\n");
    printf("10. Kilogram to Gram\n\n");
    printf("-Enter your choice (1-10): ");
    scanf("%d", &massChoice);

    printf("-Enter the weight: ");
    scanf("%f", &weight);

    switch (massChoice) {
        case 1:
            result = weight / 1000;
            printf("%.2f Kilogram = %.3f Ton\n", weight, result);
            break;
        case 2:
            result = weight * 2.20462;
            printf("%.2f Kilogram = %.2f Pound\n", weight, result);
            break;
        case 3:
            result = weight * 0.035274;
            printf("%.2f Gram = %.3f Ounce\n", weight, result);
            break;
        case 4:
            result = weight * 0.00003527396;
            printf("%.2f Milligram = %.6f Ounce\n", weight, result);
            break;
        case 5:
            result = weight * 28349.5231;
            printf("%.2f Ounce = %.2f Milligram\n", weight, result);
            break;
        case 6:
            result = weight * 28.3495231;
            printf("%.2f Ounce = %.2f Gram\n", weight, result);
            break;
        case 7:
            result = weight * 0.453592;
            printf("%.2f Pound = %.3f Kilogram\n", weight, result);
            break;
        case 8:
            result = weight * 1000;
            printf("%.2f Ton = %.2f Kilogram\n", weight, result);
            break;
        case 9:
            result = weight / 1000;
            printf("%.2f Gram = %.3f Kilogram\n", weight, result);
            break;
        case 10:
            result = weight * 1000;
            printf("%.2f Kilogram = %.2f Gram\n", weight, result);
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    // Save conversion history to file
    saveConversionHistory('M', weight, result);
}

void lengthConverter()
{
     int lengthChoice;
    double length, convertedLength;

    printf("\n");
    printf("Welcome to Length Converter!\n");
    printf("---------------------------------\n");
    printf("**Here is a list of conversions to choose from:\n\n");
    printf("1. Centimeters to Meters\n");
    printf("2. Meters to Centimeters\n");
    printf("3. Inches to Centimeters\n");
    printf("4. Centimeters to Inches\n\n");
    printf("-Enter your choice (1-4): ");
    scanf("%d", &lengthChoice);

    printf("-Enter the length: ");
    scanf("%lf", &length);

switch (lengthChoice)
{
        case 1:
            convertedLength = length / 100.0;
            printf("%.2lf centimeters is equal to %.2lf meters.\n", length, convertedLength);
            break;
        case 2:
            convertedLength = length * 100.0;
            printf("%.2lf meters is equal to %.2lf centimeters.\n", length, convertedLength);
            break;
        case 3:
            convertedLength = length * 2.54;
            printf("%.2lf inches is equal to %.2lf centimeters.\n", length, convertedLength);
            break;
        case 4:

            convertedLength = length / 2.54;
            printf("%.2lf centimeters is equal to %.2lf inches.\n", length, convertedLength);
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    // Save conversion history to file
    saveConversionHistory('L', length, convertedLength);
}

void volumeConverter()
{
     int volumeChoice;
    float value;

    printf("\n");
    printf("Welcome to Volume Converter!\n");
    printf("---------------------------------\n");
    printf("**Here is a list of conversions to choose from:\n\n");
    printf("1. Liters to Milliliters\n");
    printf("2. Milliliters to Liters\n");
    printf("3. Milliliters to Cubic Centimeters\n");
    printf("4. Cubic Centimeters to Milliliters\n\n");
    printf("-Enter your choice (1-4): ");
    scanf("%d", &volumeChoice);

    printf("-Enter the value to convert: ");
    scanf("%f", &value);

    switch (volumeChoice)
    {
        case 1:
            printf("%.2f liters = %.2f milliliters\n", value, value * 1000);
            break;
        case 2:
            printf("%.2f milliliters = %.2f liters\n", value, value / 1000);
            break;
        case 3:
            printf("%.2f milliliters = %.2f cubic centimeters\n", value, value);
            break;
        case 4:
            printf("%.2f cubic centimeters = %.2f milliliters\n", value, value);
            break;
        default:
            printf("Invalid choice! Please enter a number between 1 and 4.\n");
            break;
    }

    // Save conversion history to file
    saveConversionHistory('V', value, value);
}

void saveConversionHistory(char category, float input, float result)
{
    FILE* file;
    switch (category) {
        case 'T':
            file = fopen("temperature_history.txt", "a");
            break;
        case 'C':
            file = fopen("currency_history.txt", "a");
            break;
        case 'M':
            file = fopen("mass_history.txt", "a");
            break;
        case 'L':
            file = fopen("length_history.txt", "a");
            break;
        case 'V':
            file = fopen("volume_history.txt", "a");
            break;
        default:
            printf("Invalid category!\n");
            return;
    }

    if (file != NULL)
        {
          fprintf(file, "Input: %.2f, Result: %.2f\n", input, result);
          fclose(file);
        } else
             {
               printf("Error opening file!\n");
             }
}
