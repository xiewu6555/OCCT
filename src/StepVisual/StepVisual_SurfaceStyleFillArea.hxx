// Created on: 1995-12-01
// Created by: EXPRESS->CDL V0.2 Translator
// Copyright (c) 1995-1999 Matra Datavision
// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#ifndef _StepVisual_SurfaceStyleFillArea_HeaderFile
#define _StepVisual_SurfaceStyleFillArea_HeaderFile

#include <Standard.hxx>
#include <Standard_Type.hxx>

#include <Standard_Transient.hxx>
class StepVisual_FillAreaStyle;

class StepVisual_SurfaceStyleFillArea;
DEFINE_STANDARD_HANDLE(StepVisual_SurfaceStyleFillArea, Standard_Transient)

class StepVisual_SurfaceStyleFillArea : public Standard_Transient
{

public:
  //! Returns a SurfaceStyleFillArea
  Standard_EXPORT StepVisual_SurfaceStyleFillArea();

  Standard_EXPORT void Init(const Handle(StepVisual_FillAreaStyle)& aFillArea);

  Standard_EXPORT void SetFillArea(const Handle(StepVisual_FillAreaStyle)& aFillArea);

  Standard_EXPORT Handle(StepVisual_FillAreaStyle) FillArea() const;

  DEFINE_STANDARD_RTTIEXT(StepVisual_SurfaceStyleFillArea, Standard_Transient)

protected:
private:
  Handle(StepVisual_FillAreaStyle) fillArea;
};

#endif // _StepVisual_SurfaceStyleFillArea_HeaderFile
