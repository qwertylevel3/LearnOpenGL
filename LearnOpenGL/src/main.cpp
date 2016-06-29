/*
	��Ⱦ���裺1.������Ⱦ����setHandleDelegate
			 2. run()

*/

#define GLEW_STATIC
#include "renderDelegate.h"
#include "simpleShader.h"
#include "shaderStudy.h"
#include "render_texture.h"
#include "transform.h"
#include "coordinateSys.h"
#include "CameraStudy.h"
#include "ColorStudy.h"
#include "BasicLighting.h"
#include "MaterialStudy.h"
#include "LightingMapStudy.h"
int main() 
{
	RenderDelegate* renderDelegate = RenderDelegate::getInstance();

	renderDelegate->setHandleDelegate(new LightingMapStudy());

	renderDelegate->run();

	return 0;
}
