/****************************************************************************
 Copyright (c) 2017-2018 Xiamen Yaji Software Co., Ltd.
 
 http://www.cocos2d-x.org
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

#include "rollersplatscene.h"

USING_NS_CC;

Scene* mainmenu::createScene()
{
    auto scene = Scene::create();
    auto layer = mainmenu::create();
    scene->addChild(layer);

    return scene;
}
 

bool mainmenu::init()
{
    if (!Layer::init())
    {
        return false;
    }

    auto sprite1 = Sprite::create("black.jpg");
    auto sprite2 = Sprite::create("play1.jpg");
    sprite2->setAnchorPoint(Vec2(0,0));
    sprite1->setAnchorPoint(Vec2(0, 0));
    this->addChild(sprite1);

     
    sprite2->setPosition(100,0);

    sprite1->setPosition(0, 0);

     

     

     

    sprite1->addChild(sprite2);

    return true;
}
 
 

 