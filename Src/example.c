#include <stdio.h>
#include "parson.h"

void ex(){
    #define NAME "first"

    char * str = "{\"first\": \"John\",\"last\": \"Doe\",\"age\": 25 }";
    JSON_Value* json = json_parse_string(str);
    JSON_Object* json_obj = json_value_get_object(json);
    
    const char * val = json_object_get_string(json_obj,NAME);

    printf("%s: %s\n\r",NAME,val);

    json_value_free(json);
}

