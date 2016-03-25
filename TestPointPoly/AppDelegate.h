//
//  AppDelegate.h
//  TestPointPoly
//
//  Created by 007 on 16/3/25.
//  Copyright © 2016年 xu.lei. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <BaiduMapAPI_Base/BMKMapManager.h>
#import <BaiduMapAPI_Map/BMKMapView.h>
@interface AppDelegate : UIResponder <UIApplicationDelegate,BMKGeneralDelegate>
{
    BMKMapManager *_mapManager;
}

@property (strong, nonatomic) UIWindow *window;


@end

