//
//  VelocityResponse.h
//  VelocityCardSample
//
//  Created by Chetu on 30/01/15.
//  Copyright (c) 2015 NorthAmericanBancard. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BankcardTransactionResponsePro.h"



@class PaymentObjecthandlers;

@interface VelocityResponse : NSObject
@property (strong,nonatomic) NSString *status;
@property (strong,nonatomic) NSString *statusCode;
@property (strong,nonatomic) NSString *statusMessage;
@property (strong,nonatomic) NSString *transactionId;
@property (strong,nonatomic) NSString *originatorTransactionId;
@property (strong,nonatomic) NSString *serviceTransactionId;
@property (strong,nonatomic) NSString *captureState;
@property (strong,nonatomic) NSString *transactionState;
@property (nonatomic, assign)  BOOL acknowledged;
@property (strong,nonatomic) NSString *prepaidCard;
@property (strong,nonatomic) NSString *reference;
@property (strong,nonatomic) NSString *amount;
@property (strong,nonatomic) NSString *cardType;
@property (strong,nonatomic) NSString *feeAmount;
@property (strong,nonatomic) NSString *approvalCode;
@property (strong,nonatomic) NSString *aVSResult;
@property (strong,nonatomic) NSString *batchId;
@property (strong,nonatomic) NSString *cVResult;
@property (strong,nonatomic) NSString *cardLevel;
@property (strong,nonatomic) NSString *downgradeCode;
@property (strong,nonatomic) NSString *maskedPAN;
@property (strong,nonatomic) NSString *paymentAccountDataToken ;
@property (strong,nonatomic) NSString *retrievalReferenceNumber;
@property (strong,nonatomic) NSString *adviceResponse;
@property (strong,nonatomic) NSString *commercialCardResponse;
@property (strong,nonatomic) NSString *returnedACI;
@property (strong,nonatomic) NSString *statusHttpResponse;
@property (strong,nonatomic) NSString *statusCodeHttpResponse;
@property (strong,nonatomic) NSString *orderId;
@property (strong,nonatomic) NSString *settlementDate;
@property (strong,nonatomic) NSString *finalBalance;
@property (strong,nonatomic) NSString *cashBackAmount;
@property (strong,nonatomic) NSString *date;
@property (strong,nonatomic) NSString *time;
@property (strong,nonatomic) NSString *timeZone;
@property (strong,nonatomic) NSString *errorId;
@property (strong,nonatomic) NSString *helpUrl;
@property (strong,nonatomic) NSString *operation;
@property (strong,nonatomic) NSString *reason;
@property (strong,nonatomic) NSString *ruleMessage;
@property (strong,nonatomic) NSString *netAmount;
@property (strong,nonatomic) NSString *count;
@property (strong,nonatomic) NSString *httpCode;
@property (strong,nonatomic) NSArray * transactionDetailArray;
@property (strong,nonatomic) NSString *serviceTransactionDateTime;
@property (strong,nonatomic) NSString *addendum;
@property (strong,nonatomic) NSString *industryType;
@property (strong,nonatomic) NSString *PrepaidCard;
@property (strong,nonatomic) NSDictionary *cashBackTotals;
@property (strong,nonatomic) NSDictionary *netTotals;
@property (strong,nonatomic) NSDictionary *pINDebitReturnTotals;
@property (strong,nonatomic) NSDictionary *pINDebitSaleTotals;
@property (strong,nonatomic) NSDictionary *returnTotals;
@property (strong,nonatomic) NSDictionary *saleTotals;
@property (strong,nonatomic) NSDictionary *voidTotals;
@property (strong,nonatomic) NSDictionary *completeResponseDictionary;
@property BOOL isAcknowledged;

@end
/**
 *  methods to get values inserted in modal class
 */
@interface VelocityResponseObjectHandlers : NSObject
/**
 *  to get vaues in othe class
 *
 *  @return velocity response object
 */
+(VelocityResponse *)getModelObject;
/**
 *  to set values in the modal class
 *
 *  @param id
 *
 *  @return velocityResponse
 */
+(VelocityResponse*)setModelObject:(id )obj;


@end