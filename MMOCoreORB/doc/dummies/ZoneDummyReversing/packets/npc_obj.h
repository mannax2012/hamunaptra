#ifndef NPC_OBJS_H
#define NPC_OBJS_H


//////////////////////////////////////////////////////////////////////////////////////////////
//npc test stuff


char mob_create_new[] = {
0x00, 0x09,
0x00, 0x00,
0x05, 0x00, 
0xEA, 0xDD, 0x89, 0xFE, 
0x98, 0x61, 0x90, 0x19, 0x17, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x8A, 0x8A, 0xE6, 0xBD, 
0x00, 0x00, 0x00, 0x00, 
0x73, 0x5F, 0x7E, 0x3F, 

0x26, 0x78, 0x32, 0xC3,
0x00, 0x00, 0xE0, 0x41,
0x71, 0xC7, 0x98, 0xC5,

//49D9837F
0x7F,0x83,0xD9,0x49,

//0xCD, 0x23, 0x7F, 0xBA,
//0x5B, 0x9F, 0x58, 0x2D, 
0x00,    

0x00, 0x00, 0x00,
};
char mob_creo3_new[] = {
0x00, 0x09,
0x00, 0x00,
0x05, 0x00, 
0x0C, 0x5F, 0xA7, 0x68, 
0x98, 0x61, 0x90, 0x19, 0x17, 0x00, 0x00, 0x00, 
0x4F, 0x45, 0x52, 0x43, 0x03, 
0xA2, 0x00, 0x00, 0x00, 

0x12, 0x00, 
0x00, 0x00, 0x80, 0x3F, 

0x12, 0x00, 0x6D, 0x6F, 0x62, 0x2F, 0x63, 0x72, 0x65, 0x61, 0x74, 0x75, 0x72, 0x65, 0x5F, 0x6E, 0x61, 0x6D, 0x65, 0x73, 
// "mob/creature_names"
0x29, 0x75,  0x5A, 0xF8,
//0x00, 0x00, 0x00, 0x00, 
//0x13, 0x00, 0x63, 0x6F, 0x72, 0x65, 0x6C, 0x6C, 0x69, 0x61, 0x6E, 0x5F, 0x62, 0x75, 0x74, 0x74, 0x65, 0x72, 0x66, 0x6C, 0x79, 
0x13, 0x00, 0x63, 0x61, 0x6E, 0x79, 0x6F, 0x6E, 0x5F, 0x6B, 0x72, 0x61, 0x79, 0x74, 0x5F, 0x64,
            0x72, 0x61, 0x67, 0x6F, 0x6E,

//0x73, 0x74, 0x6F, 0x72, 0x6D, 0x5F, 0x74, 0x72, 0x6F, 0x6F, 0x70, 0x65, 0x72,
// "corellian_butterfly" 

0x00, 0x00, 0x00, 0x00, // Name
 
0x01, 0x00, 0x00, 0x00,

// customization
0x07, 0x00, 
0x02, 0x01, 0x02, 0x02, 0xC3, 
0xBF, 0x03, 

0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 
0x00, 0x00, 0x00, 0x00, 
0xE8, 0x03, 0x00, 0x00, 
0x01, //1BYTE FLAG.
0x00, //POSTURE
0x00, ///SOMETHING
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

0xE0, 0x77, 0x63, 0x3F, //HEIGHT
0x00, 0x00, 0x00, 0x00, //BATTLE FATIGUE
//STATE BITMASK
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 


0x09, 0x00, 0x00, 0x00, 
0x09, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 

0x00, 0x00, 0x00,
};

char mob_creo6_new[] = {
0x00, 0x09, 
0x00, 0x00, 
0x05, 0x00, 
0x0C, 0x5F, 0xA7, 0x68, 
0x98, 0x61, 0x90, 0x19, 0x17, 0x00, 0x00, 0x00,
0x4F, 0x45, 0x52, 0x43, 
0x06, 

0xDA, 0x00, 0x00, 0x00, 

0x16, 0x00, 
0x6E, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 


0x04, 0x00, 
0x00, 0x00,
0x05, 0x00, 0x62, 0x6F, 0x72, 0x65, 0x64, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00,0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 
0x15, 0xA8, 0x0A, 0x56, 0x03, 0x00, 0x00, 0x00,
0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x09, 0x00, 0x00, 0x00, 
0x09, 0x00, 0x00, 0x00, 
0x9D, 0x01, 0x00, 0x00, 
0x30, 0x00, 0x00, 0x00, 
0xE8, 0x03, 0x00, 0x00, 
0xE8, 0x03, 0x00, 0x00, 
0xE8, 0x03, 0x00, 0x00, 
0xE8, 0x03, 0x00, 0x00, 
0x9D, 0x01, 0x00, 0x00, 
0x30, 0x03, 0x00, 0x00, 
0xE8, 0x02, 0x00, 0x00, 
0x09, 0x00, 0x00, 0x00, 
0x09, 0x00, 0x00, 0x00, 
0x9D, 0x01, 0x00, 0x00, 
0x30, 0x00, 0x00, 0x00, 
0xE8, 0x03, 0x00, 0x00, 
0xE8, 0x03, 0x00, 0x00, 
0xE8, 0x03, 0x00, 0x00, 
0xE8, 0x03, 0x00, 0x00, 
0x9D, 0x01, 0x00, 0x00, 
0x30, 0x03, 0x00, 0x00, 
0xE8, 0x02, 0x00, 0x00, 
0x02, 0x00, 0x00, 0x00, 
0x02, 0x00, 0x00, 0x00, 
0x00, 0x00,
0x04, 0x00, 0x00, 0x00, 
0x99, 0x61, 0x90, 0x19, 0x17, 0x00, 0x00, 0x00, 
0x1C, 0x79, 0x10, 0x21,
0x00, 0x00,
0x04, 0x00, 0x00, 0x00, 
0x9D, 0x61, 0x90, 0x19, 0x17, 0x00, 0x00, 0x00, 
0x42, 0xE7, 0xD0, 0x7D, 
0x00, 0x00, 
0x00, 0x00, 0x00,      
0x00, 0x00, 0x00,      
0x00, 0x00, 0x00,      
0x00, 0x00, 0x00,      
0x00, 0x00, 0x00,      
0x00, 0x00, 0x00,
0x00, 0x00, 0x00
};  

char mob_pos2[] = {
0x08, 0x00,
0x08, 0xf8, 0x24, 0x1b, //init op
0x98, 0x61, 0x90, 0x19, 0x17, 0x00, 0x00, 0x00, //ID
0x19, 0x3A,//x
0x14, 0x00,//z
0xDD, 0xB7,//y
0x00, 0x00,//count
0x00, 0x00, 0x02, 0x2A,//direction
0x00, 0x00, 0x00 //comp+crc
, 
};
char mob_pos[] = {
0x00, 0x09,
0x00, 0x00,
0x08, 0x00,
0x08, 0xf8, 0x24, 0x1b, //init op
//0x98, 0x61, 0x90, 0x19, 0x17, 0x00, 0x00, 0x00, //ID
0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //ID
//0x15, 0xA8, 0x0A, 0x56, 0x03, 0x00, 0x00, 0x00, 
0x19, 0x3A,//x
0x70, 0x00,//z
0xDD, 0xB7,//y
0x00, 0x00,0x00, 0x00, //count
0x02, 0x2A,//direction
0x00, 0x00, 0x00 //comp+crc
};

char mob_preclose[] = {
0x00, 0x09,
0x00, 0x00,
0x03, 0x00, 
0x41, 0x6B, 0xDE, 0x0B, 
0x00, 
0x98, 0x61, 0x90, 0x19, 0x17, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00 //comp+crc
};

char mob_close[] = {
0x00, 0x09,
0x00, 0x00, 
0x02, 0x00, 
0x37, 0x60, 0x43, 0x2C, 
0x98, 0x61, 0x90, 0x19, 0x17, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00 //comp+crc
};

char mob_test[] = {
0x00, 0x09,
0x00, 0x00,
0x04, 0x00, 
0x26, 0xC1, 0xA1, 0x08, 
0x03, 0x00, 0x00, 0x00, 
//0x50, 0x88, 0x14, 0x16, 
0x03,0x00,0x00,0x00,
//0x54, 0xCC, 0x4A, 0xDB,
//0xB7, 0xB5, 0xB1, 0xC7, 0x12, 0x00, 0x00, 0x00,
0x98, 0x61, 0x90, 0x19, 0x17, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00,
};     



#endif
