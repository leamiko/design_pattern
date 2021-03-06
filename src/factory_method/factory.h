//
//  factory.h
//  design_pattern
//
//  Created by jack on 14-7-8.
//  Copyright (c) 2014年 jack. All rights reserved.
//

#ifndef design_pattern_factory_h
#define design_pattern_factory_h
#include "single_core.h"

//唯一的工厂，可以生产两种型号的处理器核，在内部判断
class Factory
{
public:
    virtual ~Factory(){}
    virtual SingleCore* CreateSingleCore()=0;
    
protected:
    //防止生成对象误用
    Factory(){}
};

class FactoryA: public Factory
{
public:
    SingleCore* CreateSingleCore()
    {
        return new SingleCoreA(); //生产核A
    }
};

class FactoryB: public Factory
{
public:
    SingleCore* CreateSingleCore()
    {
        return new SingleCoreB(); //生产核A
    }
};
#endif
