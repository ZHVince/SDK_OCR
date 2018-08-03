//
//  OCRSDK.h
//  ORCSDK
//
//  Created by 张恒 on 2018/5/16.
//  Copyright © 2018年 张恒. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface OCRSDK : NSObject

/*
 注册OCR识别账号和密钥
 account: 账号
 secretkey: 密钥
 */
+(void)initOCRWithAccount:(NSString *)account andSecretKey:(NSString *)secretKey;
/*
 type: 0身份证正面  1身份证反面   2银行卡正面   3营业执照
 superVC: 调用OCR识别的发起页面
 backImage: 识别成功后图片
 infoDic: 识别成功后返回的识别信息
 */
+(void)scanCardInfoWithType:(int)type formVC:(UIViewController *)superVC andFinishedBlock:(void (^)(UIImage * backImage,NSDictionary * infoDic))finishedBlock;
@end
