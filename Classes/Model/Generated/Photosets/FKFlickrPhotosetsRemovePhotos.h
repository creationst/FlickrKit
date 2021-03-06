//
//  FKFlickrPhotosetsRemovePhotos.h
//  FlickrKit
//
//  Generated by FKAPIBuilder on 19 Sep, 2014 at 10:49.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef enum {
	FKFlickrPhotosetsRemovePhotosError_PhotosetNotFound = 1,		 /* The photoset id passed was not the id of available photosets owned by the calling user. */
	FKFlickrPhotosetsRemovePhotosError_PhotoNotFound = 2,		 /* The photo id passed was not the id of a valid photo belonging to the calling user. */
	FKFlickrPhotosetsRemovePhotosError_SSLIsRequired = 95,		 /* SSL is required to access the Flickr API. */
	FKFlickrPhotosetsRemovePhotosError_InvalidSignature = 96,		 /* The passed signature was invalid. */
	FKFlickrPhotosetsRemovePhotosError_MissingSignature = 97,		 /* The call required signing but no signature was sent. */
	FKFlickrPhotosetsRemovePhotosError_LoginFailedOrInvalidAuthToken = 98,		 /* The login details or auth token passed were invalid. */
	FKFlickrPhotosetsRemovePhotosError_UserNotLoggedInOrInsufficientPermissions = 99,		 /* The method requires user authentication but the user was not logged in, or the authenticated method call did not have the required permissions. */
	FKFlickrPhotosetsRemovePhotosError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrPhotosetsRemovePhotosError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrPhotosetsRemovePhotosError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrPhotosetsRemovePhotosError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrPhotosetsRemovePhotosError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrPhotosetsRemovePhotosError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrPhotosetsRemovePhotosError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrPhotosetsRemovePhotosError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

} FKFlickrPhotosetsRemovePhotosError;

/*

Remove multiple photos from a photoset.




*/
@interface FKFlickrPhotosetsRemovePhotos : NSObject <FKFlickrAPIMethod>

/* The id of the photoset to remove photos from. */
@property (nonatomic, copy) NSString *photoset_id; /* (Required) */

/* Comma-delimited list of photo ids to remove from the photoset. */
@property (nonatomic, copy) NSString *photo_ids; /* (Required) */


@end
