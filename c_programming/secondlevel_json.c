#include <stdio.h>
#include "cJSON.h"
#include <string.h>

void *create_employee();
int main() {
    create_employee();

    return 0;


}

void *create_employee(){

    char *string = NULL;

    //creating json object
    cJSON *employee = cJSON_CreateObject();
    //checking for exception    
    if (employee == NULL)
    {
        goto end;
    }

    //creating another json object
    cJSON *employee_detail=cJSON_CreateObject();
    //checking for expection
    if (employee_detail == NULL)
    {
        goto end;
    }
    //passing string to first object "employee"
    cJSON_AddStringToObject(employee,"Employee:","101");

    //adding values to second object "employee_details"
    cJSON_AddStringToObject(employee_detail, "NAME:","Deepa");
    cJSON_AddNumberToObject(employee_detail,"Age",20);
    cJSON_AddNumberToObject(employee_detail,"ID",101);
    cJSON_AddBoolToObject(employee_detail,"Boolean value",1);


    // creating third json object
    cJSON *personal_details=cJSON_CreateObject();
    //checking for expection
    if (personal_details== NULL)
    {
        goto end;
    }

    cJSON *company_details=cJSON_CreateObject();
    if (company_details== NULL)
    {
        goto end;
    }

    cJSON_AddStringToObject(company_details, "NAME:","ABC");
    cJSON_AddStringToObject(company_details,"Location","Gurgaon");
    cJSON_AddBoolToObject(company_details,"Boolean value",1);
    cJSON_AddItemToObject(personal_details,"Company_details",company_details);

    //passing second object "employee_details" to third object "personal_details"
    cJSON_AddItemToObjectCS(personal_details,"personal_details",employee_detail);

    //passing third object to main object "employee"
    cJSON_AddItemToObjectCS(employee,"employee_detail:",personal_details);


    string = cJSON_Print(employee);
    if (string == NULL)
    {
        fprintf(stderr, "Failed to print monitor.\n");
    }

end:
    cJSON_Delete(employee);
    printf("%s\n",string);


}
