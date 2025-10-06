import os, shutil

cwd = os.path.dirname(os.path.realpath(__file__))

dataTypes = [
  [ 'bool'                    , 'Bool'                 ] ,
  [ 'char'                    , 'Char'                 ] ,
  [ 'signed char'             , 'SignedChar'           ] ,
  [ 'unsigned char'           , 'UnsignedChar'         ] ,
  [ 'short'                   , 'Short'                ] ,
  [ 'short int'               , 'ShortInt'             ] ,
  [ 'signed short'            , 'SignedShort'          ] ,
  [ 'signed short int'        , 'SignedShortInt'       ] ,
  [ 'unsigned short'          , 'UnsignedShort'        ] ,
  [ 'unsigned short int'      , 'UnsignedShortInt'     ] ,
  [ 'int'                     , 'Int'                  ] ,
  [ 'signed'                  , 'Signed'               ] ,
  [ 'signed int'              , 'SignedInt'            ] ,
  [ 'unsigned'                , 'Unsigned'             ] ,
  [ 'unsigned int'            , 'UnsignedInt'          ] ,
  [ 'long'                    , 'Long'                 ] ,
  [ 'long int'                , 'LongInt'              ] ,
  [ 'signed long'             , 'SignedLong'           ] ,
  [ 'signed long int'         , 'SignedLongInt'        ] ,
  [ 'unsigned long'           , 'UnsignedLong'         ] ,
  [ 'unsigned long int'       , 'UnsignedLongInt'      ] ,
  [ 'long long'               , 'LongLong'             ] ,
  [ 'long long int'           , 'LongLongInt'          ] ,
  [ 'signed long long'        , 'SignedLongLong'       ] ,
  [ 'signed long long int'    , 'SignedLongLongInt'    ] ,
  [ 'unsigned long long'      , 'UnsignedLongLong'     ] ,
  [ 'unsigned long long int'  , 'UnsignedLongLongInt'  ] ,
  [ 'float'                   , 'Float'                ] ,
  [ 'double'                  , 'Double'               ] ,
  [ 'long double'             , 'LongDouble'           ] 
]

prefix='DataType'

def addPublicFiles(absPath, folderName, name):
  includeFilePath=os.path.join(absPath, 'include', 'public', 'Campidoglio')
  srcFilePath=os.path.join(absPath, 'src', 'public')

  includeFile=os.path.join(includeFilePath, f'{folderName}.hpp')
  srcFile=os.path.join(srcFilePath, f'{folderName}.cpp')

  className=folderName

  os.makedirs(includeFilePath)
  os.makedirs(srcFilePath)

  with open(includeFile, 'w') as file:
    file.write(
      "#pragma once\n"
      "\n"
      "#include <Campidoglio/DataType.hpp>\n"
      "\n"
      "namespace Campidoglio\n"
      "{\n"
      "\n"


     f"class {className} : public Campidoglio::DataType\n"
      "{\n"
      "public:\n"
     f"  {className}();\n"
     f"  virtual ~{className}();\n"
     f"  virtual std::string getTypeNameStr() const override;\n"
      "};\n"


      "\n"
      "}\n"
    )

  with open(srcFile, 'w') as file:
    file.write(
      f"#include <Campidoglio/{className}.hpp>\n"
      "\n"
      "namespace Campidoglio\n"
      "{\n"
      "\n"
  
     f"{className}::{className}()\n"
     f"  : DataType()\n"
      "{\n"
      "}\n"

      "\n"

     f"{className}::~{className}()\n"
      "{\n"
      "}\n"

      "\n"

      f"std::string {className}::getTypeNameStr() const\n"
      "{\n"
      f"  return \"{name}\";\n"
      "}\n"

      "\n"

      "}\n"
    )

for dataType in dataTypes:
  name=dataType[0]
  folderName=prefix+dataType[1]
  absPath=os.path.join(cwd, folderName)

  if os.path.exists(absPath):
    shutil.rmtree(absPath)

  os.mkdir(absPath)

  addPublicFiles(absPath, folderName, name)

