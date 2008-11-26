/*
Copyright (c) 2008 NetAllied Systems GmbH

This file is part of COLLADAFramework.

Licensed under the MIT Open Source License, 
for details please see LICENSE file or the website
http://www.opensource.org/licenses/mit-license.php
*/

#ifndef __COLLADAFW_MATRIX_H__
#define __COLLADAFW_MATRIX_H__

#include "COLLADAFWPrerequisites.h"
#include "COLLADAFWTransformation.h"
#include "COLLADAFWMathMatrix4.h"


namespace COLLADAFW
{
	class Matrix : public Transformation 
	{
	private:
		/** The matrix holding the transformation.*/
		Math::Matrix4 mMatrix;
	
	public:
		/** Constructor. Creates identity transformation.*/
		Matrix();

		/** Constructor. Sets transformation to @a matrix.*/
		Matrix(const Math::Matrix4& matrix);

		/** Returns the matrix.*/
		const Math::Matrix4& getMatrix() const { return mMatrix; }

		/** Sets the transformation to @a matrix.*/
		void setMatrix(const Math::Matrix4& matrix) { mMatrix = matrix; }

		virtual ~Matrix();


	};
} // namespace COLLADAFW

#endif // __COLLADAFW_MATRIX_H__
