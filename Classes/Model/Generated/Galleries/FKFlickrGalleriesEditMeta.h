//
//  FKFlickrGalleriesEditMeta.h
//  FlickrKit
//
//  Generated by FKAPIBuilder on 19 Sep, 2014 at 10:49.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef enum {
	FKFlickrGalleriesEditMetaError_RequiredParameterMissing = 1,		 /* One or more required parameters was missing from your request. */
	FKFlickrGalleriesEditMetaError_InvalidTitleOrDescription = 2,		 /* The title or description arguments could not be validated. */
	FKFlickrGalleriesEditMetaError_SSLIsRequired = 95,		 /* SSL is required to access the Flickr API. */
	FKFlickrGalleriesEditMetaError_InvalidSignature = 96,		 /* The passed signature was invalid. */
	FKFlickrGalleriesEditMetaError_MissingSignature = 97,		 /* The call required signing but no signature was sent. */
	FKFlickrGalleriesEditMetaError_LoginFailedOrInvalidAuthToken = 98,		 /* The login details or auth token passed were invalid. */
	FKFlickrGalleriesEditMetaError_UserNotLoggedInOrInsufficientPermissions = 99,		 /* The method requires user authentication but the user was not logged in, or the authenticated method call did not have the required permissions. */
	FKFlickrGalleriesEditMetaError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrGalleriesEditMetaError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrGalleriesEditMetaError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrGalleriesEditMetaError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrGalleriesEditMetaError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrGalleriesEditMetaError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrGalleriesEditMetaError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrGalleriesEditMetaError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

} FKFlickrGalleriesEditMetaError;

/*

Modify the meta-data for a gallery.




*/
@interface FKFlickrGalleriesEditMeta : NSObject <FKFlickrAPIMethod>

/* The gallery ID to update. */
@property (nonatomic, copy) NSString *gallery_id; /* (Required) */

/* The new title for the gallery. */
@property (nonatomic, copy) NSString *title; /* (Required) */

/* The new description for the gallery. */
@property (nonatomic, strong) NSString *galleryDescription;


@end
