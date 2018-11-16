/*
 Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.

 Licensed under the Apache License, Version 2.0 (the "License").
 You may not use this file except in compliance with the License.
 A copy of the License is located at

 http://aws.amazon.com/apache2.0

 or in the "license" file accompanying this file. This file is distributed
 on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 express or implied. See the License for the specific language governing
 permissions and limitations under the License.
 */

#ifndef AWSiOSSDK_AWSServiceEnum_h
#define AWSiOSSDK_AWSServiceEnum_h

typedef NS_ENUM(NSInteger, AWSRegionType) {
    AWSRegionUnknown NS_SWIFT_NAME(Unknown),
    AWSRegionUSEast1 NS_SWIFT_NAME(USEast1),
    AWSRegionUSEast2 NS_SWIFT_NAME(USEast2),
    AWSRegionUSWest1 NS_SWIFT_NAME(USWest1),
    AWSRegionUSWest2 NS_SWIFT_NAME(USWest2),
    AWSRegionEUWest1 NS_SWIFT_NAME(EUWest1),
    AWSRegionEUWest2 NS_SWIFT_NAME(EUWest2),
    AWSRegionEUCentral1 NS_SWIFT_NAME(EUCentral1),
    AWSRegionAPSoutheast1 NS_SWIFT_NAME(APSoutheast1),
    AWSRegionAPNortheast1 NS_SWIFT_NAME(APNortheast1),
    AWSRegionAPNortheast2 NS_SWIFT_NAME(APNortheast2),
    AWSRegionAPNortheast3 NS_SWIFT_NAME(APNortheast3),
    AWSRegionAPSoutheast2 NS_SWIFT_NAME(APSoutheast2),
    AWSRegionAPSouth1 NS_SWIFT_NAME(APSouth1),
    AWSRegionSAEast1 NS_SWIFT_NAME(SAEast1),
    AWSRegionCNNorth1 NS_SWIFT_NAME(CNNorth1),
    AWSRegionCACentral1 NS_SWIFT_NAME(CACentral1),
    AWSRegionUSGovWest1 NS_SWIFT_NAME(USGovWest1),
    AWSRegionCNNorthWest1 NS_SWIFT_NAME(CNNorthWest1),
    AWSRegionEUWest3 NS_SWIFT_NAME(EUWest3),
    AWSRegionUSGovEast1 NS_SWIFT_NAME(USGovEast1),
};

typedef NS_ENUM(NSInteger, AWSServiceType) {
    AWSServiceUnknown,
    AWSServiceAPIGateway,
    AWSServiceAutoScaling,
    AWSServiceCloudWatch,
    AWSServiceCognitoIdentityBroker,
    AWSServiceCognitoService,
    AWSServiceDynamoDB,
    AWSServiceEC2,
    AWSServiceElasticLoadBalancing,
    AWSServiceKinesis,
    AWSServiceLambda,
    AWSServiceMachineLearning,
    AWSServiceMobileAnalytics,
    AWSServiceS3,
    AWSServiceSES,
    AWSServiceSimpleDB,
    AWSServiceSNS,
    AWSServiceSQS,
    AWSServiceSTS,
    AWSServiceCloudTrail,
};

#endif
