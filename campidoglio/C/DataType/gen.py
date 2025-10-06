import os, shutil

cwd = os.path.dirname(os.path.realpath(__file__))

dataTypes = {
  'Bool',
  'Char',
  'SignedChar',
  'UnsignedChar',
  'Short',
  'ShortInt',
  'SignedShort',
  'SignedShortInt',
  'UnsignedShort',
  'UnsignedShortInt',
  'Int',
  'Signed',
  'SignedInt',
  'Unsigned',
  'UnsignedInt',
  'Long',
  'LongInt',
  'SignedLong',
  'SignedLongInt',
  'UnsignedLong',
  'UnsignedLongInt',
  'LongLong',
  'LongLongInt',
  'SignedLongLong',
  'SignedLongLongInt',
  'UnsignedLongLong',
  'UnsignedLongLongInt',
  'Float',
  'Double',
  'LongDouble',
}

prefix='DataType'

def addPublicFiles(absPath, folderName):
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

      "}\n"
    )

for dataType in dataTypes:
  folderName=prefix+dataType
  absPath=os.path.join(cwd, folderName)

  if os.path.exists(absPath):
    shutil.rmtree(absPath)

  os.mkdir(absPath)

  addPublicFiles(absPath, folderName)

