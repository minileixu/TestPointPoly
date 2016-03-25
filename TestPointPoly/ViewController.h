//
//  ViewController.h
//  TestPointPoly
//
//  Created by 007 on 16/3/25.
//  Copyright © 2016年 xu.lei. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <BaiduMapAPI_Map/BMKMapView.h>
@interface ViewController : UIViewController<BMKMapViewDelegate>
{
    BMKMapView *_mapView;
  
}

@end

