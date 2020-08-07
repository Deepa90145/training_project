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

    //craeting json object
    cJSON *employee = cJSON_CreateObject();
    //checking for exception    
    if (employee == NULL)
    {
        goto end;
    }
    cJSON *employee_detail=cJSON_CreateObject();
    cJSON_AddStringToObject(employee_detail, "NAME:","Deepa");
    cJSON_AddNumberToObject(employee_detail,"Age",20);
    cJSON_AddNumberToObject(employee_detail,"ID",101);
    cJSON_AddBoolToObject(employee_detail,"Boolean value",1);
    cJSON_AddItemToObject(employee,"Employee",employee_detail);


    string = cJSON_Print(employee);
    if (string == NULL)
    {
        fprintf(stderr, "Failed to print monitor.\n");
    }

end:
    cJSON_Delete(employee);
    printf("%s",string);


}
