#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class KbskyBskyFactoryCompanion, KbskyCoreATProtocolConfig, KbskyCoreATProtocolFactory, KbskyCoreATProtocolTypes, KbskyCoreActorDefsAdultContentPref, KbskyCoreActorDefsAdultContentPrefCompanion, KbskyCoreActorDefsContentLabelPref, KbskyCoreActorDefsContentLabelPrefCompanion, KbskyCoreActorDefsFeedViewPref, KbskyCoreActorDefsFeedViewPrefCompanion, KbskyCoreActorDefsKnownFollowers, KbskyCoreActorDefsKnownFollowersCompanion, KbskyCoreActorDefsLabelerPrefItem, KbskyCoreActorDefsLabelerPrefItemCompanion, KbskyCoreActorDefsLabelersPref, KbskyCoreActorDefsLabelersPrefCompanion, KbskyCoreActorDefsPersonalDetailsPref, KbskyCoreActorDefsPersonalDetailsPrefCompanion, KbskyCoreActorDefsPreferencesUnion, KbskyCoreActorDefsPreferencesUnionCompanion, KbskyCoreActorDefsProfileAssociated, KbskyCoreActorDefsProfileAssociatedChat, KbskyCoreActorDefsProfileAssociatedChatCompanion, KbskyCoreActorDefsProfileAssociatedCompanion, KbskyCoreActorDefsProfileView, KbskyCoreActorDefsProfileViewBasic, KbskyCoreActorDefsProfileViewBasicCompanion, KbskyCoreActorDefsProfileViewBasic_, KbskyCoreActorDefsProfileViewBasic_Companion, KbskyCoreActorDefsProfileViewCompanion, KbskyCoreActorDefsProfileViewDetailed, KbskyCoreActorDefsProfileViewDetailedCompanion, KbskyCoreActorDefsSavedFeed, KbskyCoreActorDefsSavedFeedCompanion, KbskyCoreActorDefsSavedFeedsPref, KbskyCoreActorDefsSavedFeedsPrefCompanion, KbskyCoreActorDefsSavedFeedsPrefV2, KbskyCoreActorDefsSavedFeedsPrefV2Companion, KbskyCoreActorDefsThreadViewPref, KbskyCoreActorDefsThreadViewPrefCompanion, KbskyCoreActorDefsVerificationState, KbskyCoreActorDefsVerificationStateCompanion, KbskyCoreActorDefsVerificationView, KbskyCoreActorDefsVerificationViewCompanion, KbskyCoreActorDefsViewerState, KbskyCoreActorDefsViewerStateCompanion, KbskyCoreActorGetPreferencesRequest, KbskyCoreActorGetPreferencesResponse, KbskyCoreActorGetPreferencesResponseCompanion, KbskyCoreActorGetProfileRequest, KbskyCoreActorGetProfileResponse, KbskyCoreActorGetProfileResponseCompanion, KbskyCoreActorGetProfilesRequest, KbskyCoreActorGetProfilesResponse, KbskyCoreActorGetProfilesResponseCompanion, KbskyCoreActorProfile, KbskyCoreActorProfileCompanion, KbskyCoreActorSearchActorsRequest, KbskyCoreActorSearchActorsResponse, KbskyCoreActorSearchActorsResponseCompanion, KbskyCoreActorSearchActorsTypeaheadRequest, KbskyCoreActorSearchActorsTypeaheadResponse, KbskyCoreActorSearchActorsTypeaheadResponseCompanion, KbskyCoreActorUpdateProfileRequest, KbskyCoreActorUpdateProfileResponse, KbskyCoreActorUpdateProfileResponseCompanion, KbskyCoreAuthRequest, KbskyCoreBlob, KbskyCoreBlobCompanion, KbskyCoreBlobRef, KbskyCoreBlobRefCompanion, KbskyCoreBlueskyConfig, KbskyCoreBlueskyFactory, KbskyCoreBlueskyTypes, KbskyCoreConvoAddReactionRequest, KbskyCoreConvoAddReactionResponse, KbskyCoreConvoAddReactionResponseCompanion, KbskyCoreConvoDefsConvoView, KbskyCoreConvoDefsConvoViewCompanion, KbskyCoreConvoDefsDeletedMessageView, KbskyCoreConvoDefsDeletedMessageViewCompanion, KbskyCoreConvoDefsLogAddReaction, KbskyCoreConvoDefsLogAddReactionCompanion, KbskyCoreConvoDefsLogBeginConvo, KbskyCoreConvoDefsLogBeginConvoCompanion, KbskyCoreConvoDefsLogCreateMessage, KbskyCoreConvoDefsLogCreateMessageCompanion, KbskyCoreConvoDefsLogDeleteMessage, KbskyCoreConvoDefsLogDeleteMessageCompanion, KbskyCoreConvoDefsLogLeaveConvo, KbskyCoreConvoDefsLogLeaveConvoCompanion, KbskyCoreConvoDefsLogReadMessage, KbskyCoreConvoDefsLogReadMessageCompanion, KbskyCoreConvoDefsLogRemoveReaction, KbskyCoreConvoDefsLogRemoveReactionCompanion, KbskyCoreConvoDefsLogUnion, KbskyCoreConvoDefsLogUnionCompanion, KbskyCoreConvoDefsMessageAndReactionView, KbskyCoreConvoDefsMessageAndReactionViewCompanion, KbskyCoreConvoDefsMessageInput, KbskyCoreConvoDefsMessageInputCompanion, KbskyCoreConvoDefsMessageUnion, KbskyCoreConvoDefsMessageUnionCompanion, KbskyCoreConvoDefsMessageView, KbskyCoreConvoDefsMessageViewCompanion, KbskyCoreConvoDefsMessageViewSender, KbskyCoreConvoDefsMessageViewSenderCompanion, KbskyCoreConvoDefsReactionView, KbskyCoreConvoDefsReactionViewCompanion, KbskyCoreConvoDefsReactionViewSender, KbskyCoreConvoDefsReactionViewSenderCompanion, KbskyCoreConvoDeleteMessageForSelfRequest, KbskyCoreConvoGetConvoForMembersRequest, KbskyCoreConvoGetConvoForMembersResponse, KbskyCoreConvoGetConvoForMembersResponseCompanion, KbskyCoreConvoGetConvoRequest, KbskyCoreConvoGetConvoResponse, KbskyCoreConvoGetConvoResponseCompanion, KbskyCoreConvoGetListConvosRequest, KbskyCoreConvoGetListConvosResponse, KbskyCoreConvoGetListConvosResponseCompanion, KbskyCoreConvoGetLogRequest, KbskyCoreConvoGetLogResponse, KbskyCoreConvoGetLogResponseCompanion, KbskyCoreConvoGetMessagesRequest, KbskyCoreConvoGetMessagesResponse, KbskyCoreConvoGetMessagesResponseCompanion, KbskyCoreConvoLeaveConvoRequest, KbskyCoreConvoLeaveConvoResponse, KbskyCoreConvoLeaveConvoResponseCompanion, KbskyCoreConvoMuteConvoRequest, KbskyCoreConvoMuteConvoResponse, KbskyCoreConvoMuteConvoResponseCompanion, KbskyCoreConvoRemoveReactionRequest, KbskyCoreConvoRemoveReactionResponse, KbskyCoreConvoRemoveReactionResponseCompanion, KbskyCoreConvoSendMessageRequest, KbskyCoreConvoUnmuteConvoRequest, KbskyCoreConvoUnmuteConvoResponse, KbskyCoreConvoUnmuteConvoResponseCompanion, KbskyCoreConvoUpdateReadRequest, KbskyCoreConvoUpdateReadResponse, KbskyCoreConvoUpdateReadResponseCompanion, KbskyCoreDIDDetails, KbskyCoreDIDDetailsCompanion, KbskyCoreDIDDetailsService, KbskyCoreDIDDetailsServiceCompanion, KbskyCoreDIDDetailsVerificationMethod, KbskyCoreDIDDetailsVerificationMethodCompanion, KbskyCoreDIDLog, KbskyCoreDIDLogCompanion, KbskyCoreDIDLogPDS, KbskyCoreDIDLogPDSCompanion, KbskyCoreDIDLogService, KbskyCoreDIDLogServiceCompanion, KbskyCoreDIDLogVerificationMethods, KbskyCoreDIDLogVerificationMethodsCompanion, KbskyCoreDidDocUnion, KbskyCoreDidDocUnionCompanion, KbskyCoreEmbedDefsAspectRatio, KbskyCoreEmbedDefsAspectRatioCompanion, KbskyCoreEmbedExternal, KbskyCoreEmbedExternalCompanion, KbskyCoreEmbedExternalExternal, KbskyCoreEmbedExternalExternalCompanion, KbskyCoreEmbedExternalView, KbskyCoreEmbedExternalViewCompanion, KbskyCoreEmbedExternalViewExternal, KbskyCoreEmbedExternalViewExternalCompanion, KbskyCoreEmbedImages, KbskyCoreEmbedImagesCompanion, KbskyCoreEmbedImagesImage, KbskyCoreEmbedImagesImageCompanion, KbskyCoreEmbedImagesView, KbskyCoreEmbedImagesViewCompanion, KbskyCoreEmbedImagesViewImage, KbskyCoreEmbedImagesViewImageCompanion, KbskyCoreEmbedRecord, KbskyCoreEmbedRecordCompanion, KbskyCoreEmbedRecordView, KbskyCoreEmbedRecordViewBlocked, KbskyCoreEmbedRecordViewBlockedCompanion, KbskyCoreEmbedRecordViewCompanion, KbskyCoreEmbedRecordViewDetached, KbskyCoreEmbedRecordViewDetachedCompanion, KbskyCoreEmbedRecordViewNotFound, KbskyCoreEmbedRecordViewNotFoundCompanion, KbskyCoreEmbedRecordViewRecord, KbskyCoreEmbedRecordViewRecordCompanion, KbskyCoreEmbedRecordViewUnion, KbskyCoreEmbedRecordViewUnionCompanion, KbskyCoreEmbedRecordWithMedia, KbskyCoreEmbedRecordWithMediaCompanion, KbskyCoreEmbedRecordWithMediaView, KbskyCoreEmbedRecordWithMediaViewCompanion, KbskyCoreEmbedUnion, KbskyCoreEmbedUnionCompanion, KbskyCoreEmbedVideo, KbskyCoreEmbedVideoCompanion, KbskyCoreEmbedVideoView, KbskyCoreEmbedVideoViewCompanion, KbskyCoreEmbedViewUnion, KbskyCoreEmbedViewUnionCompanion, KbskyCoreFeedDefsFeedViewPost, KbskyCoreFeedDefsFeedViewPostCompanion, KbskyCoreFeedDefsGeneratorView, KbskyCoreFeedDefsGeneratorViewCompanion, KbskyCoreFeedDefsGeneratorViewerState, KbskyCoreFeedDefsGeneratorViewerStateCompanion, KbskyCoreFeedDefsNotFoundPost, KbskyCoreFeedDefsNotFoundPostCompanion, KbskyCoreFeedDefsPostView, KbskyCoreFeedDefsPostViewCompanion, KbskyCoreFeedDefsReasonPin, KbskyCoreFeedDefsReasonPinCompanion, KbskyCoreFeedDefsReasonRepost, KbskyCoreFeedDefsReasonRepostCompanion, KbskyCoreFeedDefsReasonUnion, KbskyCoreFeedDefsReasonUnionCompanion, KbskyCoreFeedDefsReplyRef, KbskyCoreFeedDefsReplyRefCompanion, KbskyCoreFeedDefsThreadUnion, KbskyCoreFeedDefsThreadUnionCompanion, KbskyCoreFeedDefsThreadViewPost, KbskyCoreFeedDefsThreadViewPostCompanion, KbskyCoreFeedDefsThreadgateView, KbskyCoreFeedDefsThreadgateViewCompanion, KbskyCoreFeedDefsViewerState, KbskyCoreFeedDefsViewerStateCompanion, KbskyCoreFeedDeleteLikeRequest, KbskyCoreFeedDeletePostRequest, KbskyCoreFeedDeleteRepostRequest, KbskyCoreFeedGetActorFeedsRequest, KbskyCoreFeedGetActorFeedsResponse, KbskyCoreFeedGetActorFeedsResponseCompanion, KbskyCoreFeedGetActorLikesRequest, KbskyCoreFeedGetActorLikesResponse, KbskyCoreFeedGetActorLikesResponseCompanion, KbskyCoreFeedGetAuthorFeedRequest, KbskyCoreFeedGetAuthorFeedRequestFilter, KbskyCoreFeedGetAuthorFeedResponse, KbskyCoreFeedGetAuthorFeedResponseCompanion, KbskyCoreFeedGetFeedGeneratorRequest, KbskyCoreFeedGetFeedGeneratorResponse, KbskyCoreFeedGetFeedGeneratorResponseCompanion, KbskyCoreFeedGetFeedGeneratorsRequest, KbskyCoreFeedGetFeedGeneratorsResponse, KbskyCoreFeedGetFeedGeneratorsResponseCompanion, KbskyCoreFeedGetFeedRequest, KbskyCoreFeedGetFeedResponse, KbskyCoreFeedGetFeedResponseCompanion, KbskyCoreFeedGetLikesLike, KbskyCoreFeedGetLikesLikeCompanion, KbskyCoreFeedGetLikesRequest, KbskyCoreFeedGetLikesResponse, KbskyCoreFeedGetLikesResponseCompanion, KbskyCoreFeedGetListFeedRequest, KbskyCoreFeedGetListFeedResponse, KbskyCoreFeedGetListFeedResponseCompanion, KbskyCoreFeedGetPostThreadRequest, KbskyCoreFeedGetPostThreadResponse, KbskyCoreFeedGetPostThreadResponseCompanion, KbskyCoreFeedGetPostsRequest, KbskyCoreFeedGetPostsResponse, KbskyCoreFeedGetPostsResponseCompanion, KbskyCoreFeedGetQuotesRequest, KbskyCoreFeedGetQuotesResponse, KbskyCoreFeedGetQuotesResponseCompanion, KbskyCoreFeedGetRepostedByRequest, KbskyCoreFeedGetRepostedByResponse, KbskyCoreFeedGetRepostedByResponseCompanion, KbskyCoreFeedGetTimelineRequest, KbskyCoreFeedGetTimelineResponse, KbskyCoreFeedGetTimelineResponseCompanion, KbskyCoreFeedLike, KbskyCoreFeedLikeCompanion, KbskyCoreFeedLikeRequest, KbskyCoreFeedLikeResponse, KbskyCoreFeedLikeResponseCompanion, KbskyCoreFeedPost, KbskyCoreFeedPostCompanion, KbskyCoreFeedPostReplyRef, KbskyCoreFeedPostReplyRefCompanion, KbskyCoreFeedPostRequest, KbskyCoreFeedPostResponse, KbskyCoreFeedPostResponseCompanion, KbskyCoreFeedPostgate, KbskyCoreFeedPostgateCompanion, KbskyCoreFeedPostgateDisableRule, KbskyCoreFeedPostgateDisableRuleCompanion, KbskyCoreFeedPostgateEmbeddingRulesUnion, KbskyCoreFeedPostgateEmbeddingRulesUnionCompanion, KbskyCoreFeedPostgateRequest, KbskyCoreFeedPostgateResponse, KbskyCoreFeedPostgateResponseCompanion, KbskyCoreFeedRepost, KbskyCoreFeedRepostCompanion, KbskyCoreFeedRepostRequest, KbskyCoreFeedRepostResponse, KbskyCoreFeedRepostResponseCompanion, KbskyCoreFeedSearchPostsRequest, KbskyCoreFeedSearchPostsResponse, KbskyCoreFeedSearchPostsResponseCompanion, KbskyCoreFeedThreadgate, KbskyCoreFeedThreadgateAllowUnion, KbskyCoreFeedThreadgateAllowUnionCompanion, KbskyCoreFeedThreadgateCompanion, KbskyCoreFeedThreadgateFollowingRule, KbskyCoreFeedThreadgateFollowingRuleCompanion, KbskyCoreFeedThreadgateListRule, KbskyCoreFeedThreadgateListRuleCompanion, KbskyCoreFeedThreadgateMentionRule, KbskyCoreFeedThreadgateMentionRuleCompanion, KbskyCoreFeedThreadgateRequest, KbskyCoreFeedThreadgateResponse, KbskyCoreFeedThreadgateResponseCompanion, KbskyCoreGraphAddUserToListRequest, KbskyCoreGraphBlock, KbskyCoreGraphBlockCompanion, KbskyCoreGraphBlockRequest, KbskyCoreGraphCreateListRequest, KbskyCoreGraphDefsListItemView, KbskyCoreGraphDefsListItemViewCompanion, KbskyCoreGraphDefsListView, KbskyCoreGraphDefsListViewBasic, KbskyCoreGraphDefsListViewBasicCompanion, KbskyCoreGraphDefsListViewCompanion, KbskyCoreGraphDefsListViewerState, KbskyCoreGraphDefsListViewerStateCompanion, KbskyCoreGraphDefsStarterPackView, KbskyCoreGraphDefsStarterPackViewBasic, KbskyCoreGraphDefsStarterPackViewBasicCompanion, KbskyCoreGraphDefsStarterPackViewCompanion, KbskyCoreGraphDeleteBlockRequest, KbskyCoreGraphDeleteFollowRequest, KbskyCoreGraphDeleteListRequest, KbskyCoreGraphEditListRequest, KbskyCoreGraphEditListResponse, KbskyCoreGraphEditListResponseCompanion, KbskyCoreGraphFollow, KbskyCoreGraphFollowCompanion, KbskyCoreGraphFollowRequest, KbskyCoreGraphFollowResponse, KbskyCoreGraphFollowResponseCompanion, KbskyCoreGraphGetBlocksRequest, KbskyCoreGraphGetBlocksResponse, KbskyCoreGraphGetBlocksResponseCompanion, KbskyCoreGraphGetFollowersRequest, KbskyCoreGraphGetFollowersResponse, KbskyCoreGraphGetFollowersResponseCompanion, KbskyCoreGraphGetFollowsRequest, KbskyCoreGraphGetFollowsResponse, KbskyCoreGraphGetFollowsResponseCompanion, KbskyCoreGraphGetKnownFollowersRequest, KbskyCoreGraphGetKnownFollowersResponse, KbskyCoreGraphGetKnownFollowersResponseCompanion, KbskyCoreGraphGetListRequest, KbskyCoreGraphGetListResponse, KbskyCoreGraphGetListResponseCompanion, KbskyCoreGraphGetListsRequest, KbskyCoreGraphGetListsResponse, KbskyCoreGraphGetListsResponseCompanion, KbskyCoreGraphGetMutesRequest, KbskyCoreGraphGetMutesResponse, KbskyCoreGraphGetMutesResponseCompanion, KbskyCoreGraphGetStarterPackRequest, KbskyCoreGraphGetStarterPackResponse, KbskyCoreGraphGetStarterPackResponseCompanion, KbskyCoreGraphGetStarterPacksRequest, KbskyCoreGraphGetStarterPacksResponse, KbskyCoreGraphGetStarterPacksResponseCompanion, KbskyCoreGraphList, KbskyCoreGraphListCompanion, KbskyCoreGraphListItem, KbskyCoreGraphListItemCompanion, KbskyCoreGraphMuteActorRequest, KbskyCoreGraphRemoveUserFromListRequest, KbskyCoreGraphStarterPack, KbskyCoreGraphStarterPackCompanion, KbskyCoreGraphStarterPackFeedItem, KbskyCoreGraphStarterPackFeedItemCompanion, KbskyCoreGraphUnmuteActorRequest, KbskyCoreIdentityResolveHandleRequest, KbskyCoreIdentityResolveHandleResponse, KbskyCoreIdentityResolveHandleResponseCompanion, KbskyCoreJobStatus, KbskyCoreJobStatusCompanion, KbskyCoreLabelDefsLabel, KbskyCoreLabelDefsLabelCompanion, KbskyCoreLabelDefsLabelValueDefinition, KbskyCoreLabelDefsLabelValueDefinitionCompanion, KbskyCoreLabelDefsLabelValueDefinitionStrings, KbskyCoreLabelDefsLabelValueDefinitionStringsCompanion, KbskyCoreLabelDefsSelfLabel, KbskyCoreLabelDefsSelfLabelCompanion, KbskyCoreLabelDefsSelfLabels, KbskyCoreLabelDefsSelfLabelsCompanion, KbskyCoreLabelerGetServicesRequest, KbskyCoreLabelerGetServicesResponse, KbskyCoreLabelerGetServicesResponseCompanion, KbskyCoreLabelerPolicies, KbskyCoreLabelerPoliciesCompanion, KbskyCoreLabelerView, KbskyCoreLabelerViewCompanion, KbskyCoreLabelerViewDetailed, KbskyCoreLabelerViewDetailedCompanion, KbskyCoreLabelerViewUnion, KbskyCoreLabelerViewUnionCompanion, KbskyCoreLabelerViewerState, KbskyCoreLabelerViewerStateCompanion, KbskyCoreNotificationGetUnreadCountRequest, KbskyCoreNotificationGetUnreadCountResponse, KbskyCoreNotificationGetUnreadCountResponseCompanion, KbskyCoreNotificationListNotificationsNotification, KbskyCoreNotificationListNotificationsNotificationCompanion, KbskyCoreNotificationListNotificationsRequest, KbskyCoreNotificationListNotificationsResponse, KbskyCoreNotificationListNotificationsResponseCompanion, KbskyCoreNotificationUpdateSeenRequest, KbskyCorePLCDirectoryFactory, KbskyCoreRecordUnion, KbskyCoreRecordUnionCompanion, KbskyCoreRepoCreateRecordRequest, KbskyCoreRepoCreateRecordResponse, KbskyCoreRepoCreateRecordResponseCompanion, KbskyCoreRepoDeleteRecordRequest, KbskyCoreRepoDescribeRepoRequest, KbskyCoreRepoDescribeRepoResponse, KbskyCoreRepoDescribeRepoResponseCompanion, KbskyCoreRepoGetRecordRequest, KbskyCoreRepoGetRecordResponse, KbskyCoreRepoGetRecordResponseCompanion, KbskyCoreRepoListRecordsRecord, KbskyCoreRepoListRecordsRecordCompanion, KbskyCoreRepoListRecordsRequest, KbskyCoreRepoListRecordsResponse, KbskyCoreRepoListRecordsResponseCompanion, KbskyCoreRepoPutRecordRequest, KbskyCoreRepoPutRecordResponse, KbskyCoreRepoPutRecordResponseCompanion, KbskyCoreRepoStrongRef, KbskyCoreRepoStrongRefCompanion, KbskyCoreRepoUploadBlobRequest, KbskyCoreRepoUploadBlobResponse, KbskyCoreRepoUploadBlobResponseCompanion, KbskyCoreResponse<T>, KbskyCoreRichtextFacet, KbskyCoreRichtextFacetByteSlice, KbskyCoreRichtextFacetByteSliceCompanion, KbskyCoreRichtextFacetCompanion, KbskyCoreRichtextFacetFeatureUnion, KbskyCoreRichtextFacetFeatureUnionCompanion, KbskyCoreRichtextFacetLink, KbskyCoreRichtextFacetLinkCompanion, KbskyCoreRichtextFacetMention, KbskyCoreRichtextFacetMentionCompanion, KbskyCoreRichtextFacetTag, KbskyCoreRichtextFacetTagCompanion, KbskyCoreServerCreateSessionRequest, KbskyCoreServerCreateSessionResponse, KbskyCoreServerCreateSessionResponseCompanion, KbskyCoreServerGetServiceAuthRequest, KbskyCoreServerGetServiceAuthResponse, KbskyCoreServerGetServiceAuthResponseCompanion, KbskyCoreServerGetSessionResponse, KbskyCoreServerGetSessionResponseCompanion, KbskyCoreServerRefreshSessionResponse, KbskyCoreServerRefreshSessionResponseCompanion, KbskyCoreUnspeccedGetPopularRequest, KbskyCoreUnspeccedGetPopularResponse, KbskyCoreUnspeccedGetPopularResponseCompanion, KbskyCoreVideoGetJobStatusRequest, KbskyCoreVideoGetJobStatusResponse, KbskyCoreVideoGetJobStatusResponseCompanion, KbskyCoreVideoGetUploadLimitsRequest, KbskyCoreVideoGetUploadLimitsResponse, KbskyCoreVideoGetUploadLimitsResponseCompanion, KbskyCoreVideoUploadVideoRequest, KbskyKhttpclientHttpParameter, KbskyKhttpclientHttpParameterCompanion, KbskyKhttpclientHttpParameterType, KbskyKhttpclientHttpRequest, KbskyKhttpclientHttpResponse, KbskyKhttpclientHttpResponseCompanion, KbskyKhttpclientWebsocketRequest, KbskyKotlinAbstractCoroutineContextElement, KbskyKotlinAbstractCoroutineContextKey<B, E>, KbskyKotlinArray<T>, KbskyKotlinByteArray, KbskyKotlinByteIterator, KbskyKotlinCancellationException, KbskyKotlinEnum<E>, KbskyKotlinEnumCompanion, KbskyKotlinException, KbskyKotlinIllegalStateException, KbskyKotlinKTypeProjection, KbskyKotlinKTypeProjectionCompanion, KbskyKotlinKVariance, KbskyKotlinNothing, KbskyKotlinRuntimeException, KbskyKotlinThrowable, KbskyKotlinUnit, KbskyKotlinx_coroutines_coreCoroutineDispatcher, KbskyKotlinx_coroutines_coreCoroutineDispatcherKey, KbskyKotlinx_io_coreBuffer, KbskyKotlinx_serialization_coreSerialKind, KbskyKotlinx_serialization_coreSerializersModule, KbskyKotlinx_serialization_jsonClassDiscriminatorMode, KbskyKotlinx_serialization_jsonJson, KbskyKotlinx_serialization_jsonJsonConfiguration, KbskyKotlinx_serialization_jsonJsonDefault, KbskyKotlinx_serialization_jsonJsonElement, KbskyKotlinx_serialization_jsonJsonElementCompanion, KbskyKtor_client_coreHttpClient, KbskyKtor_client_coreHttpClientCall, KbskyKtor_client_coreHttpClientCallCompanion, KbskyKtor_client_coreHttpClientConfig<T>, KbskyKtor_client_coreHttpClientEngineConfig, KbskyKtor_client_coreHttpReceivePipeline, KbskyKtor_client_coreHttpReceivePipelinePhases, KbskyKtor_client_coreHttpRequestBuilder, KbskyKtor_client_coreHttpRequestBuilderCompanion, KbskyKtor_client_coreHttpRequestData, KbskyKtor_client_coreHttpRequestPipeline, KbskyKtor_client_coreHttpRequestPipelinePhases, KbskyKtor_client_coreHttpResponse, KbskyKtor_client_coreHttpResponseContainer, KbskyKtor_client_coreHttpResponseData, KbskyKtor_client_coreHttpResponsePipeline, KbskyKtor_client_coreHttpResponsePipelinePhases, KbskyKtor_client_coreHttpSendPipeline, KbskyKtor_client_coreHttpSendPipelinePhases, KbskyKtor_client_coreProxyConfig, KbskyKtor_eventsEventDefinition<T>, KbskyKtor_eventsEvents, KbskyKtor_httpContentType, KbskyKtor_httpContentTypeCompanion, KbskyKtor_httpHeaderValueParam, KbskyKtor_httpHeaderValueWithParameters, KbskyKtor_httpHeaderValueWithParametersCompanion, KbskyKtor_httpHeadersBuilder, KbskyKtor_httpHttpMethod, KbskyKtor_httpHttpMethodCompanion, KbskyKtor_httpHttpProtocolVersion, KbskyKtor_httpHttpProtocolVersionCompanion, KbskyKtor_httpHttpStatusCode, KbskyKtor_httpHttpStatusCodeCompanion, KbskyKtor_httpOutgoingContent, KbskyKtor_httpURLBuilder, KbskyKtor_httpURLBuilderCompanion, KbskyKtor_httpURLProtocol, KbskyKtor_httpURLProtocolCompanion, KbskyKtor_httpUrl, KbskyKtor_httpUrlCompanion, KbskyKtor_utilsAttributeKey<T>, KbskyKtor_utilsGMTDate, KbskyKtor_utilsGMTDateCompanion, KbskyKtor_utilsMonth, KbskyKtor_utilsMonthCompanion, KbskyKtor_utilsPipeline<TSubject, TContext>, KbskyKtor_utilsPipelinePhase, KbskyKtor_utilsStringValuesBuilderImpl, KbskyKtor_utilsTypeInfo, KbskyKtor_utilsWeekDay, KbskyKtor_utilsWeekDayCompanion, KbskyStreamATProtocolStreamConfig, KbskyStreamATProtocolStreamFactory, KbskyStreamSyncStreamClient, KbskyStreamSyncSubscribeReposRequest;

@protocol KbskyCoreATProtocol, KbskyCoreActorResource, KbskyCoreAuthProvider, KbskyCoreBluesky, KbskyCoreConvoResource, KbskyCoreFeedResource, KbskyCoreGraphResource, KbskyCoreIdentityResource, KbskyCoreLabelerResource, KbskyCoreMapRequest, KbskyCoreNotificationResource, KbskyCorePLCDirectory, KbskyCoreRKeyRequest, KbskyCoreRecordRequest, KbskyCoreRepoResource, KbskyCoreServerResource, KbskyCoreUnspeccedResource, KbskyCoreVideoResource, KbskyKotlinAnnotation, KbskyKotlinAutoCloseable, KbskyKotlinComparable, KbskyKotlinContinuation, KbskyKotlinContinuationInterceptor, KbskyKotlinCoroutineContext, KbskyKotlinCoroutineContextElement, KbskyKotlinCoroutineContextKey, KbskyKotlinFunction, KbskyKotlinIterator, KbskyKotlinKAnnotatedElement, KbskyKotlinKClass, KbskyKotlinKClassifier, KbskyKotlinKDeclarationContainer, KbskyKotlinKType, KbskyKotlinMapEntry, KbskyKotlinSequence, KbskyKotlinSuspendFunction1, KbskyKotlinSuspendFunction2, KbskyKotlinx_coroutines_coreChildHandle, KbskyKotlinx_coroutines_coreChildJob, KbskyKotlinx_coroutines_coreCoroutineScope, KbskyKotlinx_coroutines_coreDisposableHandle, KbskyKotlinx_coroutines_coreJob, KbskyKotlinx_coroutines_coreParentJob, KbskyKotlinx_coroutines_coreRunnable, KbskyKotlinx_coroutines_coreSelectClause, KbskyKotlinx_coroutines_coreSelectClause0, KbskyKotlinx_coroutines_coreSelectInstance, KbskyKotlinx_io_coreRawSink, KbskyKotlinx_io_coreRawSource, KbskyKotlinx_io_coreSink, KbskyKotlinx_io_coreSource, KbskyKotlinx_serialization_coreCompositeDecoder, KbskyKotlinx_serialization_coreCompositeEncoder, KbskyKotlinx_serialization_coreDecoder, KbskyKotlinx_serialization_coreDeserializationStrategy, KbskyKotlinx_serialization_coreEncoder, KbskyKotlinx_serialization_coreKSerializer, KbskyKotlinx_serialization_coreSerialDescriptor, KbskyKotlinx_serialization_coreSerialFormat, KbskyKotlinx_serialization_coreSerializationStrategy, KbskyKotlinx_serialization_coreSerializersModuleCollector, KbskyKotlinx_serialization_coreStringFormat, KbskyKotlinx_serialization_jsonJsonNamingStrategy, KbskyKtor_client_coreHttpClientEngine, KbskyKtor_client_coreHttpClientEngineCapability, KbskyKtor_client_coreHttpClientPlugin, KbskyKtor_client_coreHttpRequest, KbskyKtor_httpHeaders, KbskyKtor_httpHttpMessage, KbskyKtor_httpHttpMessageBuilder, KbskyKtor_httpParameters, KbskyKtor_httpParametersBuilder, KbskyKtor_ioByteReadChannel, KbskyKtor_ioCloseable, KbskyKtor_ioJvmSerializable, KbskyKtor_utilsAttributes, KbskyKtor_utilsStringValues, KbskyKtor_utilsStringValuesBuilder, KbskyStreamATProtocolStream, KbskyStreamClosedCallback, KbskyStreamErrorCallback, KbskyStreamOpenedCallback, KbskyStreamSyncEventCallback, KbskyStreamSyncResource;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface KbskyBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface KbskyBase (KbskyBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface KbskyMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface KbskyMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorKbskyKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface KbskyNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface KbskyByte : KbskyNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface KbskyUByte : KbskyNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface KbskyShort : KbskyNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface KbskyUShort : KbskyNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface KbskyInt : KbskyNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface KbskyUInt : KbskyNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface KbskyLong : KbskyNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface KbskyULong : KbskyNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface KbskyFloat : KbskyNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface KbskyDouble : KbskyNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface KbskyBoolean : KbskyNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BskyFactory")))
@interface KbskyBskyFactory : KbskyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KbskyBskyFactoryCompanion *companion __attribute__((swift_name("companion")));
- (id<KbskyCoreATProtocol>)atprotoUri:(NSString *)uri __attribute__((swift_name("atproto(uri:)")));
- (id<KbskyCoreBluesky>)blueskyUri:(NSString *)uri __attribute__((swift_name("bluesky(uri:)")));
- (id<KbskyCorePLCDirectory>)plc __attribute__((swift_name("plc()")));
- (id<KbskyCorePLCDirectory>)plcUri:(NSString *)uri __attribute__((swift_name("plc(uri:)")));
- (id<KbskyStreamATProtocolStream>)streamApiUri:(NSString *)apiUri streamUri:(NSString *)streamUri __attribute__((swift_name("stream(apiUri:streamUri:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BskyFactory.Companion")))
@interface KbskyBskyFactoryCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyBskyFactoryCompanion *shared __attribute__((swift_name("shared")));
- (KbskyCoreATProtocolFactory *)getATProtocolFactory __attribute__((swift_name("getATProtocolFactory()")));
- (KbskyStreamATProtocolStreamFactory *)getATProtocolStreamFactory __attribute__((swift_name("getATProtocolStreamFactory()")));
- (KbskyCoreATProtocolTypes *)getATProtocolTypes __attribute__((swift_name("getATProtocolTypes()")));
- (KbskyCoreBlueskyTypes *)getBlueSkyTypes __attribute__((swift_name("getBlueSkyTypes()")));
- (KbskyCoreBlueskyFactory *)getBlueskyFactory __attribute__((swift_name("getBlueskyFactory()")));
- (KbskyCorePLCDirectoryFactory *)getPLCDirectoryFactory __attribute__((swift_name("getPLCDirectoryFactory()")));
@end

__attribute__((swift_name("CoreATProtocol")))
@protocol KbskyCoreATProtocol
@required
- (id<KbskyCoreIdentityResource>)identity __attribute__((swift_name("identity()")));
- (id<KbskyCoreRepoResource>)repo __attribute__((swift_name("repo()")));
- (id<KbskyCoreServerResource>)server __attribute__((swift_name("server()")));
@end

__attribute__((swift_name("CoreBluesky")))
@protocol KbskyCoreBluesky <KbskyCoreATProtocol>
@required
- (id<KbskyCoreActorResource>)actor __attribute__((swift_name("actor()")));
- (id<KbskyCoreConvoResource>)convo __attribute__((swift_name("convo()")));
- (id<KbskyCoreFeedResource>)feed __attribute__((swift_name("feed()")));
- (id<KbskyCoreGraphResource>)graph __attribute__((swift_name("graph()")));
- (id<KbskyCoreLabelerResource>)labeler __attribute__((swift_name("labeler()")));
- (id<KbskyCoreNotificationResource>)notification __attribute__((swift_name("notification()")));
- (id<KbskyCoreUnspeccedResource>)unspecced __attribute__((swift_name("unspecced()")));
- (id<KbskyCoreVideoResource>)video __attribute__((swift_name("video()")));
@end

__attribute__((swift_name("CorePLCDirectory")))
@protocol KbskyCorePLCDirectory
@required
- (KbskyCoreResponse<KbskyCoreDIDDetails *> *)DIDDetailsDid:(NSString *)did __attribute__((swift_name("DIDDetails(did:)")));
- (KbskyCoreResponse<NSArray<KbskyCoreDIDLog *> *> *)DIDLogsDid:(NSString *)did __attribute__((swift_name("DIDLogs(did:)")));
@end

__attribute__((swift_name("StreamATProtocolStream")))
@protocol KbskyStreamATProtocolStream
@required
- (id<KbskyStreamSyncResource>)sync __attribute__((swift_name("sync()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreATProtocolFactory")))
@interface KbskyCoreATProtocolFactory : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)aTProtocolFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreATProtocolFactory *shared __attribute__((swift_name("shared")));
- (id<KbskyCoreATProtocol>)instanceUri:(NSString *)uri __attribute__((swift_name("instance(uri:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StreamATProtocolStreamFactory")))
@interface KbskyStreamATProtocolStreamFactory : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)aTProtocolStreamFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyStreamATProtocolStreamFactory *shared __attribute__((swift_name("shared")));
- (id<KbskyStreamATProtocolStream>)instanceConfig:(KbskyStreamATProtocolStreamConfig *)config __attribute__((swift_name("instance(config:)")));
- (id<KbskyStreamATProtocolStream>)instancePdsUri:(NSString *)pdsUri firehoseUri:(NSString *)firehoseUri __attribute__((swift_name("instance(pdsUri:firehoseUri:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreATProtocolTypes")))
@interface KbskyCoreATProtocolTypes : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)aTProtocolTypes __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreATProtocolTypes *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *AdminGetModerationAction __attribute__((swift_name("AdminGetModerationAction")));
@property (readonly) NSString *AdminGetModerationActions __attribute__((swift_name("AdminGetModerationActions")));
@property (readonly) NSString *AdminGetModerationReport __attribute__((swift_name("AdminGetModerationReport")));
@property (readonly) NSString *AdminGetModerationReports __attribute__((swift_name("AdminGetModerationReports")));
@property (readonly) NSString *AdminGetRecord __attribute__((swift_name("AdminGetRecord")));
@property (readonly) NSString *AdminGetRepo __attribute__((swift_name("AdminGetRepo")));
@property (readonly) NSString *AdminResolveModerationReports __attribute__((swift_name("AdminResolveModerationReports")));
@property (readonly) NSString *AdminReverseModerationAction __attribute__((swift_name("AdminReverseModerationAction")));
@property (readonly) NSString *AdminSearchRepos __attribute__((swift_name("AdminSearchRepos")));
@property (readonly) NSString *AdminTakeModerationAction __attribute__((swift_name("AdminTakeModerationAction")));
@property (readonly) NSString *IdentifyResolveHandle __attribute__((swift_name("IdentifyResolveHandle")));
@property (readonly) NSString *IdentifyUpdateHandle __attribute__((swift_name("IdentifyUpdateHandle")));
@property (readonly) NSString *LabelDefs __attribute__((swift_name("LabelDefs")));
@property (readonly) NSString *ModerationCreateReport __attribute__((swift_name("ModerationCreateReport")));
@property (readonly) NSString *RepoApplyWrites __attribute__((swift_name("RepoApplyWrites")));
@property (readonly) NSString *RepoCreateRecord __attribute__((swift_name("RepoCreateRecord")));
@property (readonly) NSString *RepoDeleteRecord __attribute__((swift_name("RepoDeleteRecord")));
@property (readonly) NSString *RepoDescribeRepo __attribute__((swift_name("RepoDescribeRepo")));
@property (readonly) NSString *RepoGetRecord __attribute__((swift_name("RepoGetRecord")));
@property (readonly) NSString *RepoListRecords __attribute__((swift_name("RepoListRecords")));
@property (readonly) NSString *RepoPutRecord __attribute__((swift_name("RepoPutRecord")));
@property (readonly) NSString *RepoUploadBlob __attribute__((swift_name("RepoUploadBlob")));
@property (readonly) NSString *ServerCreateAccount __attribute__((swift_name("ServerCreateAccount")));
@property (readonly) NSString *ServerCreateInviteCode __attribute__((swift_name("ServerCreateInviteCode")));
@property (readonly) NSString *ServerCreateSession __attribute__((swift_name("ServerCreateSession")));
@property (readonly) NSString *ServerDeleteAccount __attribute__((swift_name("ServerDeleteAccount")));
@property (readonly) NSString *ServerDeleteSession __attribute__((swift_name("ServerDeleteSession")));
@property (readonly) NSString *ServerDescribeServer __attribute__((swift_name("ServerDescribeServer")));
@property (readonly) NSString *ServerGetServiceAuth __attribute__((swift_name("ServerGetServiceAuth")));
@property (readonly) NSString *ServerGetSession __attribute__((swift_name("ServerGetSession")));
@property (readonly) NSString *ServerRefreshSession __attribute__((swift_name("ServerRefreshSession")));
@property (readonly) NSString *ServerRequestAccountDelete __attribute__((swift_name("ServerRequestAccountDelete")));
@property (readonly) NSString *ServerRequestPasswordReset __attribute__((swift_name("ServerRequestPasswordReset")));
@property (readonly) NSString *ServerResetPassword __attribute__((swift_name("ServerResetPassword")));
@property (readonly) NSString *SyncGetBlob __attribute__((swift_name("SyncGetBlob")));
@property (readonly) NSString *SyncGetBlocks __attribute__((swift_name("SyncGetBlocks")));
@property (readonly) NSString *SyncGetCheckout __attribute__((swift_name("SyncGetCheckout")));
@property (readonly) NSString *SyncGetCommitPath __attribute__((swift_name("SyncGetCommitPath")));
@property (readonly) NSString *SyncGetHead __attribute__((swift_name("SyncGetHead")));
@property (readonly) NSString *SyncGetRecord __attribute__((swift_name("SyncGetRecord")));
@property (readonly) NSString *SyncGetRepo __attribute__((swift_name("SyncGetRepo")));
@property (readonly) NSString *SyncListBlobs __attribute__((swift_name("SyncListBlobs")));
@property (readonly) NSString *SyncNotifyOfUpdate __attribute__((swift_name("SyncNotifyOfUpdate")));
@property (readonly) NSString *SyncRequestCrawl __attribute__((swift_name("SyncRequestCrawl")));
@property (readonly) NSString *SyncSubscribeRepos __attribute__((swift_name("SyncSubscribeRepos")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlueskyTypes")))
@interface KbskyCoreBlueskyTypes : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)blueskyTypes __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreBlueskyTypes *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ActorDefs __attribute__((swift_name("ActorDefs")));
@property (readonly) NSString *ActorGetPreferences __attribute__((swift_name("ActorGetPreferences")));
@property (readonly) NSString *ActorGetProfile __attribute__((swift_name("ActorGetProfile")));
@property (readonly) NSString *ActorGetProfiles __attribute__((swift_name("ActorGetProfiles")));
@property (readonly) NSString *ActorGetSuggestions __attribute__((swift_name("ActorGetSuggestions")));
@property (readonly) NSString *ActorProfile __attribute__((swift_name("ActorProfile")));
@property (readonly) NSString *ActorSearchActors __attribute__((swift_name("ActorSearchActors")));
@property (readonly) NSString *ActorSearchActorsTypeahead __attribute__((swift_name("ActorSearchActorsTypeahead")));
@property (readonly) NSString *ConvoAddReaction __attribute__((swift_name("ConvoAddReaction")));
@property (readonly) NSString *ConvoDefs __attribute__((swift_name("ConvoDefs")));
@property (readonly) NSString *ConvoDeleteMessageForSelf __attribute__((swift_name("ConvoDeleteMessageForSelf")));
@property (readonly) NSString *ConvoGetConvo __attribute__((swift_name("ConvoGetConvo")));
@property (readonly) NSString *ConvoGetConvoForMembers __attribute__((swift_name("ConvoGetConvoForMembers")));
@property (readonly) NSString *ConvoGetLog __attribute__((swift_name("ConvoGetLog")));
@property (readonly) NSString *ConvoGetMessages __attribute__((swift_name("ConvoGetMessages")));
@property (readonly) NSString *ConvoLeaveConvo __attribute__((swift_name("ConvoLeaveConvo")));
@property (readonly) NSString *ConvoListConvos __attribute__((swift_name("ConvoListConvos")));
@property (readonly) NSString *ConvoMuteConvo __attribute__((swift_name("ConvoMuteConvo")));
@property (readonly) NSString *ConvoRemoveReaction __attribute__((swift_name("ConvoRemoveReaction")));
@property (readonly) NSString *ConvoSendMessage __attribute__((swift_name("ConvoSendMessage")));
@property (readonly) NSString *ConvoSendMessageBatch __attribute__((swift_name("ConvoSendMessageBatch")));
@property (readonly) NSString *ConvoUnmuteConvo __attribute__((swift_name("ConvoUnmuteConvo")));
@property (readonly) NSString *ConvoUpdateRead __attribute__((swift_name("ConvoUpdateRead")));
@property (readonly) NSString *EmbedExternal __attribute__((swift_name("EmbedExternal")));
@property (readonly) NSString *EmbedImages __attribute__((swift_name("EmbedImages")));
@property (readonly) NSString *EmbedRecord __attribute__((swift_name("EmbedRecord")));
@property (readonly) NSString *EmbedRecordWithMedia __attribute__((swift_name("EmbedRecordWithMedia")));
@property (readonly) NSString *EmbedVideo __attribute__((swift_name("EmbedVideo")));
@property (readonly) NSString *FeedDefs __attribute__((swift_name("FeedDefs")));
@property (readonly) NSString *FeedGetActorFeeds __attribute__((swift_name("FeedGetActorFeeds")));
@property (readonly) NSString *FeedGetActorLikes __attribute__((swift_name("FeedGetActorLikes")));
@property (readonly) NSString *FeedGetAuthorFeed __attribute__((swift_name("FeedGetAuthorFeed")));
@property (readonly) NSString *FeedGetFeed __attribute__((swift_name("FeedGetFeed")));
@property (readonly) NSString *FeedGetFeedGenerator __attribute__((swift_name("FeedGetFeedGenerator")));
@property (readonly) NSString *FeedGetFeedGenerators __attribute__((swift_name("FeedGetFeedGenerators")));
@property (readonly) NSString *FeedGetFeedSearchPosts __attribute__((swift_name("FeedGetFeedSearchPosts")));
@property (readonly) NSString *FeedGetLikes __attribute__((swift_name("FeedGetLikes")));
@property (readonly) NSString *FeedGetListFeed __attribute__((swift_name("FeedGetListFeed")));
@property (readonly) NSString *FeedGetPostThread __attribute__((swift_name("FeedGetPostThread")));
@property (readonly) NSString *FeedGetPosts __attribute__((swift_name("FeedGetPosts")));
@property (readonly) NSString *FeedGetQuotes __attribute__((swift_name("FeedGetQuotes")));
@property (readonly) NSString *FeedGetRepostedBy __attribute__((swift_name("FeedGetRepostedBy")));
@property (readonly) NSString *FeedGetTimeline __attribute__((swift_name("FeedGetTimeline")));
@property (readonly) NSString *FeedLike __attribute__((swift_name("FeedLike")));
@property (readonly) NSString *FeedPost __attribute__((swift_name("FeedPost")));
@property (readonly) NSString *FeedPostgate __attribute__((swift_name("FeedPostgate")));
@property (readonly) NSString *FeedRepost __attribute__((swift_name("FeedRepost")));
@property (readonly) NSString *FeedThreadgate __attribute__((swift_name("FeedThreadgate")));
@property (readonly) NSString *GraphBlock __attribute__((swift_name("GraphBlock")));
@property (readonly) NSString *GraphDefs __attribute__((swift_name("GraphDefs")));
@property (readonly) NSString *GraphFollow __attribute__((swift_name("GraphFollow")));
@property (readonly) NSString *GraphGetBlocks __attribute__((swift_name("GraphGetBlocks")));
@property (readonly) NSString *GraphGetFollowers __attribute__((swift_name("GraphGetFollowers")));
@property (readonly) NSString *GraphGetFollows __attribute__((swift_name("GraphGetFollows")));
@property (readonly) NSString *GraphGetKnownFollowers __attribute__((swift_name("GraphGetKnownFollowers")));
@property (readonly) NSString *GraphGetList __attribute__((swift_name("GraphGetList")));
@property (readonly) NSString *GraphGetLists __attribute__((swift_name("GraphGetLists")));
@property (readonly) NSString *GraphGetMutes __attribute__((swift_name("GraphGetMutes")));
@property (readonly) NSString *GraphGetStarterPack __attribute__((swift_name("GraphGetStarterPack")));
@property (readonly) NSString *GraphGetStarterPacks __attribute__((swift_name("GraphGetStarterPacks")));
@property (readonly) NSString *GraphList __attribute__((swift_name("GraphList")));
@property (readonly) NSString *GraphListItem __attribute__((swift_name("GraphListItem")));
@property (readonly) NSString *GraphMuteActor __attribute__((swift_name("GraphMuteActor")));
@property (readonly) NSString *GraphStarterPack __attribute__((swift_name("GraphStarterPack")));
@property (readonly) NSString *GraphUnmuteActor __attribute__((swift_name("GraphUnmuteActor")));
@property (readonly) NSString *LabelerDefs __attribute__((swift_name("LabelerDefs")));
@property (readonly) NSString *LabelerGetServices __attribute__((swift_name("LabelerGetServices")));
@property (readonly) NSString *NotificationGetUnreadCount __attribute__((swift_name("NotificationGetUnreadCount")));
@property (readonly) NSString *NotificationListNotifications __attribute__((swift_name("NotificationListNotifications")));
@property (readonly) NSString *NotificationUpdateSeen __attribute__((swift_name("NotificationUpdateSeen")));
@property (readonly) NSString *RichtextFacet __attribute__((swift_name("RichtextFacet")));
@property (readonly) NSString *UnspeccedGetPopular __attribute__((swift_name("UnspeccedGetPopular")));
@property (readonly) NSString *VideoGetJobStatus __attribute__((swift_name("VideoGetJobStatus")));
@property (readonly) NSString *VideoGetUploadLimits __attribute__((swift_name("VideoGetUploadLimits")));
@property (readonly) NSString *VideoUploadVideo __attribute__((swift_name("VideoUploadVideo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlueskyFactory")))
@interface KbskyCoreBlueskyFactory : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)blueskyFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreBlueskyFactory *shared __attribute__((swift_name("shared")));
- (id<KbskyCoreBluesky>)instanceUri:(NSString *)uri __attribute__((swift_name("instance(uri:)")));
- (id<KbskyCoreBluesky>)instanceConfig:(KbskyCoreBlueskyConfig *)config __attribute__((swift_name("instance(config:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePLCDirectoryFactory")))
@interface KbskyCorePLCDirectoryFactory : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)pLCDirectoryFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCorePLCDirectoryFactory *shared __attribute__((swift_name("shared")));
- (id<KbskyCorePLCDirectory>)instance __attribute__((swift_name("instance()")));
- (id<KbskyCorePLCDirectory>)instanceUri:(NSString *)uri __attribute__((swift_name("instance(uri:)")));
@end

__attribute__((swift_name("CoreIdentityResource")))
@protocol KbskyCoreIdentityResource
@required
- (KbskyCoreResponse<KbskyCoreIdentityResolveHandleResponse *> *)resolveHandleRequest:(KbskyCoreIdentityResolveHandleRequest *)request __attribute__((swift_name("resolveHandle(request:)")));
- (void)updateHandle __attribute__((swift_name("updateHandle()")));
@end

__attribute__((swift_name("CoreRepoResource")))
@protocol KbskyCoreRepoResource
@required
- (void)applyWrites __attribute__((swift_name("applyWrites()")));
- (KbskyCoreResponse<KbskyCoreRepoCreateRecordResponse *> *)createRecordRequest:(KbskyCoreRepoCreateRecordRequest *)request __attribute__((swift_name("createRecord(request:)")));
- (KbskyCoreResponse<KbskyKotlinUnit *> *)deleteRecordRequest:(KbskyCoreRepoDeleteRecordRequest *)request __attribute__((swift_name("deleteRecord(request:)")));
- (KbskyCoreResponse<KbskyCoreRepoDescribeRepoResponse *> *)describeRepoRequest:(KbskyCoreRepoDescribeRepoRequest *)request __attribute__((swift_name("describeRepo(request:)")));
- (KbskyCoreResponse<KbskyCoreRepoGetRecordResponse *> *)getRecordRequest:(KbskyCoreRepoGetRecordRequest *)request __attribute__((swift_name("getRecord(request:)")));
- (KbskyCoreResponse<KbskyCoreRepoListRecordsResponse *> *)listRecordsRequest:(KbskyCoreRepoListRecordsRequest *)request __attribute__((swift_name("listRecords(request:)")));
- (KbskyCoreResponse<KbskyCoreRepoPutRecordResponse *> *)putRecordRequest:(KbskyCoreRepoPutRecordRequest *)request __attribute__((swift_name("putRecord(request:)")));
- (KbskyCoreResponse<KbskyCoreRepoUploadBlobResponse *> *)uploadBlobRequest:(KbskyCoreRepoUploadBlobRequest *)request __attribute__((swift_name("uploadBlob(request:)")));
@end

__attribute__((swift_name("CoreServerResource")))
@protocol KbskyCoreServerResource
@required
- (void)createAccount __attribute__((swift_name("createAccount()")));
- (void)createInviteCode __attribute__((swift_name("createInviteCode()")));
- (KbskyCoreResponse<KbskyCoreServerCreateSessionResponse *> *)createSessionRequest:(KbskyCoreServerCreateSessionRequest *)request __attribute__((swift_name("createSession(request:)")));
- (void)deleteAccount __attribute__((swift_name("deleteAccount()")));
- (KbskyCoreResponse<KbskyKotlinUnit *> *)deleteSessionRequest:(KbskyCoreAuthRequest *)request __attribute__((swift_name("deleteSession(request:)")));
- (void)describeServer __attribute__((swift_name("describeServer()")));
- (KbskyCoreResponse<KbskyCoreServerGetServiceAuthResponse *> *)getServiceAuthRequest:(KbskyCoreServerGetServiceAuthRequest *)request __attribute__((swift_name("getServiceAuth(request:)")));
- (KbskyCoreResponse<KbskyCoreServerGetSessionResponse *> *)getSessionRequest:(KbskyCoreAuthRequest *)request __attribute__((swift_name("getSession(request:)")));
- (KbskyCoreResponse<KbskyCoreServerRefreshSessionResponse *> *)refreshSessionRequest:(KbskyCoreAuthRequest *)request __attribute__((swift_name("refreshSession(request:)")));
- (void)requestAccountDelete __attribute__((swift_name("requestAccountDelete()")));
- (void)requestPasswordReset __attribute__((swift_name("requestPasswordReset()")));
- (void)resetPassword __attribute__((swift_name("resetPassword()")));
@end

__attribute__((swift_name("CoreActorResource")))
@protocol KbskyCoreActorResource
@required
- (KbskyCoreResponse<KbskyCoreActorGetPreferencesResponse *> *)getPreferencesRequest:(KbskyCoreActorGetPreferencesRequest *)request __attribute__((swift_name("getPreferences(request:)")));
- (KbskyCoreResponse<KbskyCoreActorGetProfileResponse *> *)getProfileRequest:(KbskyCoreActorGetProfileRequest *)request __attribute__((swift_name("getProfile(request:)")));
- (KbskyCoreResponse<KbskyCoreActorGetProfilesResponse *> *)getProfilesRequest:(KbskyCoreActorGetProfilesRequest *)request __attribute__((swift_name("getProfiles(request:)")));
- (KbskyCoreResponse<KbskyCoreActorSearchActorsResponse *> *)searchActorsRequest:(KbskyCoreActorSearchActorsRequest *)request __attribute__((swift_name("searchActors(request:)")));
- (KbskyCoreResponse<KbskyCoreActorSearchActorsTypeaheadResponse *> *)searchActorsTypeaheadRequest:(KbskyCoreActorSearchActorsTypeaheadRequest *)request __attribute__((swift_name("searchActorsTypeahead(request:)")));
- (KbskyCoreResponse<KbskyCoreActorUpdateProfileResponse *> *)updateProfileRequest:(KbskyCoreActorUpdateProfileRequest *)request __attribute__((swift_name("updateProfile(request:)")));
@end

__attribute__((swift_name("CoreConvoResource")))
@protocol KbskyCoreConvoResource
@required
- (KbskyCoreResponse<KbskyCoreConvoAddReactionResponse *> *)addReactionRequest:(KbskyCoreConvoAddReactionRequest *)request __attribute__((swift_name("addReaction(request:)")));
- (KbskyCoreResponse<KbskyCoreConvoDefsDeletedMessageView *> *)deleteMessageForSelfRequest:(KbskyCoreConvoDeleteMessageForSelfRequest *)request __attribute__((swift_name("deleteMessageForSelf(request:)")));
- (KbskyCoreResponse<KbskyCoreConvoGetConvoResponse *> *)getConvoRequest:(KbskyCoreConvoGetConvoRequest *)request __attribute__((swift_name("getConvo(request:)")));
- (KbskyCoreResponse<KbskyCoreConvoGetConvoForMembersResponse *> *)getConvoForMembersRequest:(KbskyCoreConvoGetConvoForMembersRequest *)request __attribute__((swift_name("getConvoForMembers(request:)")));
- (KbskyCoreResponse<KbskyCoreConvoGetListConvosResponse *> *)getListConvosRequest:(KbskyCoreConvoGetListConvosRequest *)request __attribute__((swift_name("getListConvos(request:)")));
- (KbskyCoreResponse<KbskyCoreConvoGetLogResponse *> *)getLogRequest:(KbskyCoreConvoGetLogRequest *)request __attribute__((swift_name("getLog(request:)")));
- (KbskyCoreResponse<KbskyCoreConvoGetMessagesResponse *> *)getMessagesRequest:(KbskyCoreConvoGetMessagesRequest *)request __attribute__((swift_name("getMessages(request:)")));
- (KbskyCoreResponse<KbskyCoreConvoLeaveConvoResponse *> *)leaveConvoRequest:(KbskyCoreConvoLeaveConvoRequest *)request __attribute__((swift_name("leaveConvo(request:)")));
- (KbskyCoreResponse<KbskyCoreConvoMuteConvoResponse *> *)muteConvoRequest:(KbskyCoreConvoMuteConvoRequest *)request __attribute__((swift_name("muteConvo(request:)")));
- (KbskyCoreResponse<KbskyCoreConvoRemoveReactionResponse *> *)removeReactionRequest:(KbskyCoreConvoRemoveReactionRequest *)request __attribute__((swift_name("removeReaction(request:)")));
- (KbskyCoreResponse<KbskyCoreConvoDefsMessageView *> *)sendMessageRequest:(KbskyCoreConvoSendMessageRequest *)request __attribute__((swift_name("sendMessage(request:)")));
- (KbskyCoreResponse<KbskyCoreConvoUnmuteConvoResponse *> *)unmuteConvoRequest:(KbskyCoreConvoUnmuteConvoRequest *)request __attribute__((swift_name("unmuteConvo(request:)")));
- (KbskyCoreResponse<KbskyCoreConvoUpdateReadResponse *> *)updateReadRequest:(KbskyCoreConvoUpdateReadRequest *)request __attribute__((swift_name("updateRead(request:)")));
@end

__attribute__((swift_name("CoreFeedResource")))
@protocol KbskyCoreFeedResource
@required
- (KbskyCoreResponse<KbskyKotlinUnit *> *)deleteLikeRequest:(KbskyCoreFeedDeleteLikeRequest *)request __attribute__((swift_name("deleteLike(request:)")));
- (KbskyCoreResponse<KbskyKotlinUnit *> *)deletePostRequest:(KbskyCoreFeedDeletePostRequest *)request __attribute__((swift_name("deletePost(request:)")));
- (KbskyCoreResponse<KbskyKotlinUnit *> *)deleteRepostRequest:(KbskyCoreFeedDeleteRepostRequest *)request __attribute__((swift_name("deleteRepost(request:)")));
- (KbskyCoreResponse<KbskyCoreFeedGetActorFeedsResponse *> *)getActorFeedsRequest:(KbskyCoreFeedGetActorFeedsRequest *)request __attribute__((swift_name("getActorFeeds(request:)")));
- (KbskyCoreResponse<KbskyCoreFeedGetActorLikesResponse *> *)getActorLikesRequest:(KbskyCoreFeedGetActorLikesRequest *)request __attribute__((swift_name("getActorLikes(request:)")));
- (KbskyCoreResponse<KbskyCoreFeedGetAuthorFeedResponse *> *)getAuthorFeedRequest:(KbskyCoreFeedGetAuthorFeedRequest *)request __attribute__((swift_name("getAuthorFeed(request:)")));
- (KbskyCoreResponse<KbskyCoreFeedGetFeedResponse *> *)getFeedRequest:(KbskyCoreFeedGetFeedRequest *)request __attribute__((swift_name("getFeed(request:)")));
- (KbskyCoreResponse<KbskyCoreFeedGetFeedGeneratorResponse *> *)getFeedGeneratorRequest:(KbskyCoreFeedGetFeedGeneratorRequest *)request __attribute__((swift_name("getFeedGenerator(request:)")));
- (KbskyCoreResponse<KbskyCoreFeedGetFeedGeneratorsResponse *> *)getFeedGeneratorsRequest:(KbskyCoreFeedGetFeedGeneratorsRequest *)request __attribute__((swift_name("getFeedGenerators(request:)")));
- (KbskyCoreResponse<KbskyCoreFeedGetLikesResponse *> *)getLikesRequest:(KbskyCoreFeedGetLikesRequest *)request __attribute__((swift_name("getLikes(request:)")));
- (KbskyCoreResponse<KbskyCoreFeedGetListFeedResponse *> *)getListFeedRequest:(KbskyCoreFeedGetListFeedRequest *)request __attribute__((swift_name("getListFeed(request:)")));
- (KbskyCoreResponse<KbskyCoreFeedGetPostThreadResponse *> *)getPostThreadRequest:(KbskyCoreFeedGetPostThreadRequest *)request __attribute__((swift_name("getPostThread(request:)")));
- (KbskyCoreResponse<KbskyCoreFeedGetPostsResponse *> *)getPostsRequest:(KbskyCoreFeedGetPostsRequest *)request __attribute__((swift_name("getPosts(request:)")));
- (KbskyCoreResponse<KbskyCoreFeedGetQuotesResponse *> *)getQuotesRequest:(KbskyCoreFeedGetQuotesRequest *)request __attribute__((swift_name("getQuotes(request:)")));
- (KbskyCoreResponse<KbskyCoreFeedGetRepostedByResponse *> *)getRepostedByRequest:(KbskyCoreFeedGetRepostedByRequest *)request __attribute__((swift_name("getRepostedBy(request:)")));
- (KbskyCoreResponse<KbskyCoreFeedGetTimelineResponse *> *)getTimelineRequest:(KbskyCoreFeedGetTimelineRequest *)request __attribute__((swift_name("getTimeline(request:)")));
- (KbskyCoreResponse<KbskyCoreFeedLikeResponse *> *)likeRequest:(KbskyCoreFeedLikeRequest *)request __attribute__((swift_name("like(request:)")));
- (KbskyCoreResponse<KbskyCoreFeedPostResponse *> *)postRequest:(KbskyCoreFeedPostRequest *)request __attribute__((swift_name("post(request:)")));
- (KbskyCoreResponse<KbskyCoreFeedPostgateResponse *> *)postgateRequest:(KbskyCoreFeedPostgateRequest *)request __attribute__((swift_name("postgate(request:)")));
- (KbskyCoreResponse<KbskyCoreFeedRepostResponse *> *)repostRequest:(KbskyCoreFeedRepostRequest *)request __attribute__((swift_name("repost(request:)")));
- (KbskyCoreResponse<KbskyCoreFeedSearchPostsResponse *> *)searchPostsRequest:(KbskyCoreFeedSearchPostsRequest *)request __attribute__((swift_name("searchPosts(request:)")));
- (KbskyCoreResponse<KbskyCoreFeedThreadgateResponse *> *)threadgateRequest:(KbskyCoreFeedThreadgateRequest *)request __attribute__((swift_name("threadgate(request:)")));
@end

__attribute__((swift_name("CoreGraphResource")))
@protocol KbskyCoreGraphResource
@required
- (KbskyCoreResponse<KbskyCoreRepoCreateRecordResponse *> *)addUserToListRequest:(KbskyCoreGraphAddUserToListRequest *)request __attribute__((swift_name("addUserToList(request:)")));
- (KbskyCoreResponse<KbskyCoreRepoCreateRecordResponse *> *)blockRequest:(KbskyCoreGraphBlockRequest *)request __attribute__((swift_name("block(request:)")));
- (KbskyCoreResponse<KbskyCoreRepoCreateRecordResponse *> *)createListRequest:(KbskyCoreGraphCreateListRequest *)request __attribute__((swift_name("createList(request:)")));
- (KbskyCoreResponse<KbskyKotlinUnit *> *)deleteBlockRequest:(KbskyCoreGraphDeleteBlockRequest *)request __attribute__((swift_name("deleteBlock(request:)")));
- (KbskyCoreResponse<KbskyKotlinUnit *> *)deleteFollowRequest:(KbskyCoreGraphDeleteFollowRequest *)request __attribute__((swift_name("deleteFollow(request:)")));
- (KbskyCoreResponse<KbskyKotlinUnit *> *)deleteListRequest:(KbskyCoreGraphDeleteListRequest *)request __attribute__((swift_name("deleteList(request:)")));
- (KbskyCoreResponse<KbskyCoreGraphEditListResponse *> *)editListRequest:(KbskyCoreGraphEditListRequest *)request __attribute__((swift_name("editList(request:)")));
- (KbskyCoreResponse<KbskyCoreGraphFollowResponse *> *)followRequest:(KbskyCoreGraphFollowRequest *)request __attribute__((swift_name("follow(request:)")));
- (KbskyCoreResponse<KbskyCoreGraphGetBlocksResponse *> *)getBlocksRequest:(KbskyCoreGraphGetBlocksRequest *)request __attribute__((swift_name("getBlocks(request:)")));
- (KbskyCoreResponse<KbskyCoreGraphGetFollowersResponse *> *)getFollowersRequest:(KbskyCoreGraphGetFollowersRequest *)request __attribute__((swift_name("getFollowers(request:)")));
- (KbskyCoreResponse<KbskyCoreGraphGetFollowsResponse *> *)getFollowsRequest:(KbskyCoreGraphGetFollowsRequest *)request __attribute__((swift_name("getFollows(request:)")));
- (KbskyCoreResponse<KbskyCoreGraphGetKnownFollowersResponse *> *)getKnownFollowersRequest:(KbskyCoreGraphGetKnownFollowersRequest *)request __attribute__((swift_name("getKnownFollowers(request:)")));
- (KbskyCoreResponse<KbskyCoreGraphGetListResponse *> *)getListRequest:(KbskyCoreGraphGetListRequest *)request __attribute__((swift_name("getList(request:)")));
- (KbskyCoreResponse<KbskyCoreGraphGetListsResponse *> *)getListsRequest:(KbskyCoreGraphGetListsRequest *)request __attribute__((swift_name("getLists(request:)")));
- (KbskyCoreResponse<KbskyCoreGraphGetMutesResponse *> *)getMutesRequest:(KbskyCoreGraphGetMutesRequest *)request __attribute__((swift_name("getMutes(request:)")));
- (KbskyCoreResponse<KbskyCoreGraphGetStarterPackResponse *> *)getStarterPackRequest:(KbskyCoreGraphGetStarterPackRequest *)request __attribute__((swift_name("getStarterPack(request:)")));
- (KbskyCoreResponse<KbskyCoreGraphGetStarterPacksResponse *> *)getStarterPacksRequest:(KbskyCoreGraphGetStarterPacksRequest *)request __attribute__((swift_name("getStarterPacks(request:)")));
- (KbskyCoreResponse<KbskyKotlinUnit *> *)muteActorRequest:(KbskyCoreGraphMuteActorRequest *)request __attribute__((swift_name("muteActor(request:)")));
- (KbskyCoreResponse<KbskyKotlinUnit *> *)removeUserFromListRequest:(KbskyCoreGraphRemoveUserFromListRequest *)request __attribute__((swift_name("removeUserFromList(request:)")));
- (KbskyCoreResponse<KbskyKotlinUnit *> *)unmuteActorRequest:(KbskyCoreGraphUnmuteActorRequest *)request __attribute__((swift_name("unmuteActor(request:)")));
@end

__attribute__((swift_name("CoreLabelerResource")))
@protocol KbskyCoreLabelerResource
@required
- (KbskyCoreResponse<KbskyCoreLabelerGetServicesResponse *> *)getServicesRequest:(KbskyCoreLabelerGetServicesRequest *)request __attribute__((swift_name("getServices(request:)")));
@end

__attribute__((swift_name("CoreNotificationResource")))
@protocol KbskyCoreNotificationResource
@required
- (KbskyCoreResponse<KbskyCoreNotificationGetUnreadCountResponse *> *)getUnreadCountRequest:(KbskyCoreNotificationGetUnreadCountRequest *)request __attribute__((swift_name("getUnreadCount(request:)")));
- (KbskyCoreResponse<KbskyCoreNotificationListNotificationsResponse *> *)listNotificationsRequest:(KbskyCoreNotificationListNotificationsRequest *)request __attribute__((swift_name("listNotifications(request:)")));
- (KbskyCoreResponse<KbskyKotlinUnit *> *)updateSeenRequest:(KbskyCoreNotificationUpdateSeenRequest *)request __attribute__((swift_name("updateSeen(request:)")));
@end

__attribute__((swift_name("CoreUnspeccedResource")))
@protocol KbskyCoreUnspeccedResource
@required
- (KbskyCoreResponse<KbskyCoreUnspeccedGetPopularResponse *> *)getPopularRequest:(KbskyCoreUnspeccedGetPopularRequest *)request __attribute__((swift_name("getPopular(request:)")));
@end

__attribute__((swift_name("CoreVideoResource")))
@protocol KbskyCoreVideoResource
@required
- (KbskyCoreResponse<KbskyCoreVideoGetJobStatusResponse *> *)getJobStatusRequest:(KbskyCoreVideoGetJobStatusRequest *)request __attribute__((swift_name("getJobStatus(request:)")));
- (KbskyCoreResponse<KbskyCoreVideoGetUploadLimitsResponse *> *)getUploadLimitsRequest:(KbskyCoreVideoGetUploadLimitsRequest *)request __attribute__((swift_name("getUploadLimits(request:)")));
- (KbskyCoreResponse<KbskyCoreJobStatus *> *)uploadVideoRequest:(KbskyCoreVideoUploadVideoRequest *)request __attribute__((swift_name("uploadVideo(request:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=work/socialhub/kbsky/util/json/DidDocPolymorphicSerializer))
*/
__attribute__((swift_name("CoreDidDocUnion")))
@interface KbskyCoreDidDocUnion : KbskyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KbskyCoreDidDocUnionCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) KbskyCoreDIDDetails * _Nullable asDIDDetails __attribute__((swift_name("asDIDDetails")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDIDDetails")))
@interface KbskyCoreDIDDetails : KbskyCoreDidDocUnion
- (instancetype)initWithId:(NSString * _Nullable)id alsoKnownAs:(NSArray<NSString *> * _Nullable)alsoKnownAs verificationMethod:(NSArray<KbskyCoreDIDDetailsVerificationMethod *> * _Nullable)verificationMethod service:(NSArray<KbskyCoreDIDDetailsService *> * _Nullable)service __attribute__((swift_name("init(id:alsoKnownAs:verificationMethod:service:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreDIDDetailsCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreDIDDetails *)doCopyId:(NSString * _Nullable)id alsoKnownAs:(NSArray<NSString *> * _Nullable)alsoKnownAs verificationMethod:(NSArray<KbskyCoreDIDDetailsVerificationMethod *> * _Nullable)verificationMethod service:(NSArray<KbskyCoreDIDDetailsService *> * _Nullable)service __attribute__((swift_name("doCopy(id:alsoKnownAs:verificationMethod:service:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString * _Nullable)pdsEndpoint __attribute__((swift_name("pdsEndpoint()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSArray<NSString *> * _Nullable alsoKnownAs __attribute__((swift_name("alsoKnownAs")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property NSArray<KbskyCoreDIDDetailsService *> * _Nullable service __attribute__((swift_name("service")));
@property NSArray<KbskyCoreDIDDetailsVerificationMethod *> * _Nullable verificationMethod __attribute__((swift_name("verificationMethod")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreResponse")))
@interface KbskyCoreResponse<T> : KbskyBase
- (instancetype)initWithData:(T _Nullable)data json:(NSString *)json __attribute__((swift_name("init(data:json:)"))) __attribute__((objc_designated_initializer));
- (KbskyCoreResponse<T> *)doCopyData:(T _Nullable)data json:(NSString *)json __attribute__((swift_name("doCopy(data:json:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable data __attribute__((swift_name("data")));
@property (readonly) NSString *json __attribute__((swift_name("json")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDIDLog")))
@interface KbskyCoreDIDLog : KbskyBase
- (instancetype)initWithSig:(NSString * _Nullable)sig prev:(NSString * _Nullable)prev type:(NSString * _Nullable)type services:(KbskyCoreDIDLogService * _Nullable)services alsoKnownAs:(NSArray<NSString *> * _Nullable)alsoKnownAs rotationKeys:(NSArray<NSString *> * _Nullable)rotationKeys verificationMethods:(KbskyCoreDIDLogVerificationMethods * _Nullable)verificationMethods __attribute__((swift_name("init(sig:prev:type:services:alsoKnownAs:rotationKeys:verificationMethods:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreDIDLogCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreDIDLog *)doCopySig:(NSString * _Nullable)sig prev:(NSString * _Nullable)prev type:(NSString * _Nullable)type services:(KbskyCoreDIDLogService * _Nullable)services alsoKnownAs:(NSArray<NSString *> * _Nullable)alsoKnownAs rotationKeys:(NSArray<NSString *> * _Nullable)rotationKeys verificationMethods:(KbskyCoreDIDLogVerificationMethods * _Nullable)verificationMethods __attribute__((swift_name("doCopy(sig:prev:type:services:alsoKnownAs:rotationKeys:verificationMethods:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSArray<NSString *> * _Nullable alsoKnownAs __attribute__((swift_name("alsoKnownAs")));
@property NSString * _Nullable prev __attribute__((swift_name("prev")));
@property NSArray<NSString *> * _Nullable rotationKeys __attribute__((swift_name("rotationKeys")));
@property KbskyCoreDIDLogService * _Nullable services __attribute__((swift_name("services")));
@property NSString * _Nullable sig __attribute__((swift_name("sig")));
@property NSString * _Nullable type __attribute__((swift_name("type")));
@property KbskyCoreDIDLogVerificationMethods * _Nullable verificationMethods __attribute__((swift_name("verificationMethods")));
@end

__attribute__((swift_name("StreamSyncResource")))
@protocol KbskyStreamSyncResource
@required
- (KbskyStreamSyncStreamClient *)subscribeReposRequest:(KbskyStreamSyncSubscribeReposRequest *)request __attribute__((swift_name("subscribeRepos(request:)")));
@end

__attribute__((swift_name("CoreATProtocolConfig")))
@interface KbskyCoreATProtocolConfig : KbskyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString *pdsUri __attribute__((swift_name("pdsUri")));
@property BOOL updatePdsUri __attribute__((swift_name("updatePdsUri")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StreamATProtocolStreamConfig")))
@interface KbskyStreamATProtocolStreamConfig : KbskyCoreATProtocolConfig
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString *firehoseUri __attribute__((swift_name("firehoseUri")));
@end

__attribute__((swift_name("CoreBlueskyConfig")))
@interface KbskyCoreBlueskyConfig : KbskyCoreATProtocolConfig
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString *videoServiceDid __attribute__((swift_name("videoServiceDid")));
@property NSString *videoServiceUri __attribute__((swift_name("videoServiceUri")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreIdentityResolveHandleResponse")))
@interface KbskyCoreIdentityResolveHandleResponse : KbskyBase
- (instancetype)initWithDid:(NSString *)did __attribute__((swift_name("init(did:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreIdentityResolveHandleResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreIdentityResolveHandleResponse *)doCopyDid:(NSString *)did __attribute__((swift_name("doCopy(did:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *did __attribute__((swift_name("did")));
@end

__attribute__((swift_name("CoreMapRequest")))
@protocol KbskyCoreMapRequest
@required
- (void)addParam:(KbskyMutableDictionary<NSString *, id> *)receiver key:(NSString *)key value:(id _Nullable)value __attribute__((swift_name("addParam(_:key:value:)")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)toMappedJson __attribute__((swift_name("toMappedJson()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreIdentityResolveHandleRequest")))
@interface KbskyCoreIdentityResolveHandleRequest : KbskyBase <KbskyCoreMapRequest>
- (instancetype)initWithHandle:(NSString * _Nullable)handle __attribute__((swift_name("init(handle:)"))) __attribute__((objc_designated_initializer));
- (KbskyCoreIdentityResolveHandleRequest *)doCopyHandle:(NSString * _Nullable)handle __attribute__((swift_name("doCopy(handle:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (KbskyCoreIdentityResolveHandleRequest *)handleHandle:(NSString *)handle __attribute__((swift_name("handle(handle:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (KbskyMutableDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable handle __attribute__((swift_name("handle")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CoreRepoCreateRecordResponse")))
@interface KbskyCoreRepoCreateRecordResponse : KbskyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 uri:(NSString * _Nullable)uri cid:(NSString * _Nullable)cid serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:uri:cid:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreRepoCreateRecordResponseCompanion *companion __attribute__((swift_name("companion")));
@property NSString *cid __attribute__((swift_name("cid")));
@property NSString *uri __attribute__((swift_name("uri")));
@end

__attribute__((swift_name("CoreAuthRequest")))
@interface KbskyCoreAuthRequest : KbskyBase
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRepoCreateRecordRequest")))
@interface KbskyCoreRepoCreateRecordRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth repo:(NSString *)repo collection:(NSString *)collection record:(KbskyCoreRecordUnion *)record rkey:(NSString * _Nullable)rkey validate:(KbskyBoolean * _Nullable)validate swapCommit:(NSString * _Nullable)swapCommit __attribute__((swift_name("init(auth:repo:collection:record:rkey:validate:swapCommit:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreRepoCreateRecordRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth repo:(NSString *)repo collection:(NSString *)collection record:(KbskyCoreRecordUnion *)record rkey:(NSString * _Nullable)rkey validate:(KbskyBoolean * _Nullable)validate swapCommit:(NSString * _Nullable)swapCommit __attribute__((swift_name("doCopy(auth:repo:collection:record:rkey:validate:swapCommit:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (KbskyMutableDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSString *collection __attribute__((swift_name("collection")));
@property KbskyCoreRecordUnion *record __attribute__((swift_name("record")));
@property NSString *repo __attribute__((swift_name("repo")));
@property NSString * _Nullable rkey __attribute__((swift_name("rkey")));
@property NSString * _Nullable swapCommit __attribute__((swift_name("swapCommit")));
@property KbskyBoolean * _Nullable validate __attribute__((swift_name("validate")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface KbskyKotlinUnit : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRepoDeleteRecordRequest")))
@interface KbskyCoreRepoDeleteRecordRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth repo:(NSString *)repo collection:(NSString *)collection rkey:(NSString *)rkey swapRecord:(NSString * _Nullable)swapRecord swapCommit:(NSString * _Nullable)swapCommit __attribute__((swift_name("init(auth:repo:collection:rkey:swapRecord:swapCommit:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreRepoDeleteRecordRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth repo:(NSString *)repo collection:(NSString *)collection rkey:(NSString *)rkey swapRecord:(NSString * _Nullable)swapRecord swapCommit:(NSString * _Nullable)swapCommit __attribute__((swift_name("doCopy(auth:repo:collection:rkey:swapRecord:swapCommit:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSString *collection __attribute__((swift_name("collection")));
@property NSString *repo __attribute__((swift_name("repo")));
@property NSString *rkey __attribute__((swift_name("rkey")));
@property NSString * _Nullable swapCommit __attribute__((swift_name("swapCommit")));
@property NSString * _Nullable swapRecord __attribute__((swift_name("swapRecord")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRepoDescribeRepoResponse")))
@interface KbskyCoreRepoDescribeRepoResponse : KbskyBase
- (instancetype)initWithHandle:(NSString *)handle did:(NSString *)did didDoc:(KbskyCoreDidDocUnion * _Nullable)didDoc collections:(NSArray<NSString *> * _Nullable)collections handleIsCorrect:(BOOL)handleIsCorrect __attribute__((swift_name("init(handle:did:didDoc:collections:handleIsCorrect:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreRepoDescribeRepoResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreRepoDescribeRepoResponse *)doCopyHandle:(NSString *)handle did:(NSString *)did didDoc:(KbskyCoreDidDocUnion * _Nullable)didDoc collections:(NSArray<NSString *> * _Nullable)collections handleIsCorrect:(BOOL)handleIsCorrect __attribute__((swift_name("doCopy(handle:did:didDoc:collections:handleIsCorrect:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> * _Nullable collections __attribute__((swift_name("collections")));
@property (readonly) NSString *did __attribute__((swift_name("did")));
@property (readonly) KbskyCoreDidDocUnion * _Nullable didDoc __attribute__((swift_name("didDoc")));
@property (readonly) NSString *handle __attribute__((swift_name("handle")));
@property (readonly) BOOL handleIsCorrect __attribute__((swift_name("handleIsCorrect")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRepoDescribeRepoRequest")))
@interface KbskyCoreRepoDescribeRepoRequest : KbskyBase <KbskyCoreMapRequest>
- (instancetype)initWithRepo:(NSString *)repo __attribute__((swift_name("init(repo:)"))) __attribute__((objc_designated_initializer));
- (KbskyCoreRepoDescribeRepoRequest *)doCopyRepo:(NSString *)repo __attribute__((swift_name("doCopy(repo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *repo __attribute__((swift_name("repo")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRepoGetRecordResponse")))
@interface KbskyCoreRepoGetRecordResponse : KbskyBase
- (instancetype)initWithUri:(NSString *)uri cid:(NSString * _Nullable)cid value:(KbskyCoreRecordUnion *)value __attribute__((swift_name("init(uri:cid:value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreRepoGetRecordResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreRepoGetRecordResponse *)doCopyUri:(NSString *)uri cid:(NSString * _Nullable)cid value:(KbskyCoreRecordUnion *)value __attribute__((swift_name("doCopy(uri:cid:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable cid __attribute__((swift_name("cid")));
@property NSString *uri __attribute__((swift_name("uri")));
@property KbskyCoreRecordUnion *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRepoGetRecordRequest")))
@interface KbskyCoreRepoGetRecordRequest : KbskyBase <KbskyCoreMapRequest>
- (instancetype)initWithRepo:(NSString *)repo collection:(NSString *)collection rkey:(NSString * _Nullable)rkey uri:(NSString * _Nullable)uri cid:(NSString * _Nullable)cid __attribute__((swift_name("init(repo:collection:rkey:uri:cid:)"))) __attribute__((objc_designated_initializer));
- (KbskyCoreRepoGetRecordRequest *)doCopyRepo:(NSString *)repo collection:(NSString *)collection rkey:(NSString * _Nullable)rkey uri:(NSString * _Nullable)uri cid:(NSString * _Nullable)cid __attribute__((swift_name("doCopy(repo:collection:rkey:uri:cid:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString * _Nullable)rkey __attribute__((swift_name("rkey()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable cid __attribute__((swift_name("cid")));
@property NSString *collection __attribute__((swift_name("collection")));
@property NSString *repo __attribute__((swift_name("repo")));
@property (getter=rkey_) NSString * _Nullable rkey __attribute__((swift_name("rkey")));
@property NSString * _Nullable uri __attribute__((swift_name("uri")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRepoListRecordsResponse")))
@interface KbskyCoreRepoListRecordsResponse : KbskyBase
- (instancetype)initWithCursor:(NSString * _Nullable)cursor records:(NSArray<KbskyCoreRepoListRecordsRecord *> *)records __attribute__((swift_name("init(cursor:records:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreRepoListRecordsResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreRepoListRecordsResponse *)doCopyCursor:(NSString * _Nullable)cursor records:(NSArray<KbskyCoreRepoListRecordsRecord *> *)records __attribute__((swift_name("doCopy(cursor:records:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property NSArray<KbskyCoreRepoListRecordsRecord *> *records __attribute__((swift_name("records")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRepoListRecordsRequest")))
@interface KbskyCoreRepoListRecordsRequest : KbskyBase <KbskyCoreMapRequest>
- (instancetype)initWithRepo:(NSString *)repo collection:(NSString *)collection __attribute__((swift_name("init(repo:collection:)"))) __attribute__((objc_designated_initializer));
- (KbskyCoreRepoListRecordsRequest *)doCopyRepo:(NSString *)repo collection:(NSString *)collection __attribute__((swift_name("doCopy(repo:collection:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *collection __attribute__((swift_name("collection")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property KbskyInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString *repo __attribute__((swift_name("repo")));
@property KbskyBoolean * _Nullable reverse __attribute__((swift_name("reverse")));
@property NSString * _Nullable rkeyEnd __attribute__((swift_name("rkeyEnd")));
@property NSString * _Nullable rkeyStart __attribute__((swift_name("rkeyStart")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CoreRepoPutRecordResponse")))
@interface KbskyCoreRepoPutRecordResponse : KbskyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 uri:(NSString * _Nullable)uri cid:(NSString * _Nullable)cid serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:uri:cid:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreRepoPutRecordResponseCompanion *companion __attribute__((swift_name("companion")));
@property NSString *cid __attribute__((swift_name("cid")));
@property NSString *uri __attribute__((swift_name("uri")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRepoPutRecordRequest")))
@interface KbskyCoreRepoPutRecordRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth repo:(NSString *)repo collection:(NSString *)collection rkey:(NSString *)rkey record:(KbskyCoreRecordUnion *)record __attribute__((swift_name("init(auth:repo:collection:rkey:record:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreRepoPutRecordRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth repo:(NSString *)repo collection:(NSString *)collection rkey:(NSString *)rkey record:(KbskyCoreRecordUnion *)record __attribute__((swift_name("doCopy(auth:repo:collection:rkey:record:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSString *collection __attribute__((swift_name("collection")));
@property KbskyCoreRecordUnion *record __attribute__((swift_name("record")));
@property NSString *repo __attribute__((swift_name("repo")));
@property NSString *rkey __attribute__((swift_name("rkey")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRepoUploadBlobResponse")))
@interface KbskyCoreRepoUploadBlobResponse : KbskyBase
- (instancetype)initWithBlob:(KbskyCoreBlob *)blob __attribute__((swift_name("init(blob:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreRepoUploadBlobResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreRepoUploadBlobResponse *)doCopyBlob:(KbskyCoreBlob *)blob __attribute__((swift_name("doCopy(blob:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KbskyCoreBlob *blob __attribute__((swift_name("blob")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRepoUploadBlobRequest")))
@interface KbskyCoreRepoUploadBlobRequest : KbskyCoreAuthRequest
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth bytes:(KbskyKotlinByteArray *)bytes name:(NSString *)name contentType:(NSString *)contentType __attribute__((swift_name("init(auth:bytes:name:contentType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreRepoUploadBlobRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth bytes:(KbskyKotlinByteArray *)bytes name:(NSString *)name contentType:(NSString *)contentType __attribute__((swift_name("doCopy(auth:bytes:name:contentType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property KbskyKotlinByteArray *bytes __attribute__((swift_name("bytes")));
@property NSString *contentType __attribute__((swift_name("contentType")));
@property NSString *name __attribute__((swift_name("name")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreServerCreateSessionResponse")))
@interface KbskyCoreServerCreateSessionResponse : KbskyBase
- (instancetype)initWithAccessJwt:(NSString *)accessJwt refreshJwt:(NSString *)refreshJwt handle:(NSString *)handle did:(NSString *)did email:(NSString * _Nullable)email emailConfirmed:(KbskyBoolean * _Nullable)emailConfirmed emailAuthFactor:(KbskyBoolean * _Nullable)emailAuthFactor didDoc:(KbskyCoreDidDocUnion * _Nullable)didDoc active:(KbskyBoolean * _Nullable)active __attribute__((swift_name("init(accessJwt:refreshJwt:handle:did:email:emailConfirmed:emailAuthFactor:didDoc:active:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreServerCreateSessionResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreServerCreateSessionResponse *)doCopyAccessJwt:(NSString *)accessJwt refreshJwt:(NSString *)refreshJwt handle:(NSString *)handle did:(NSString *)did email:(NSString * _Nullable)email emailConfirmed:(KbskyBoolean * _Nullable)emailConfirmed emailAuthFactor:(KbskyBoolean * _Nullable)emailAuthFactor didDoc:(KbskyCoreDidDocUnion * _Nullable)didDoc active:(KbskyBoolean * _Nullable)active __attribute__((swift_name("doCopy(accessJwt:refreshJwt:handle:did:email:emailConfirmed:emailAuthFactor:didDoc:active:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *accessJwt __attribute__((swift_name("accessJwt")));
@property KbskyBoolean * _Nullable active __attribute__((swift_name("active")));
@property NSString *did __attribute__((swift_name("did")));
@property KbskyCoreDidDocUnion * _Nullable didDoc __attribute__((swift_name("didDoc")));
@property NSString * _Nullable email __attribute__((swift_name("email")));
@property KbskyBoolean * _Nullable emailAuthFactor __attribute__((swift_name("emailAuthFactor")));
@property KbskyBoolean * _Nullable emailConfirmed __attribute__((swift_name("emailConfirmed")));
@property NSString *handle __attribute__((swift_name("handle")));
@property NSString *refreshJwt __attribute__((swift_name("refreshJwt")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreServerCreateSessionRequest")))
@interface KbskyCoreServerCreateSessionRequest : KbskyBase <KbskyCoreMapRequest>
- (instancetype)initWithIdentifier:(NSString * _Nullable)identifier password:(NSString * _Nullable)password __attribute__((swift_name("init(identifier:password:)"))) __attribute__((objc_designated_initializer));
- (KbskyCoreServerCreateSessionRequest *)doCopyIdentifier:(NSString * _Nullable)identifier password:(NSString * _Nullable)password __attribute__((swift_name("doCopy(identifier:password:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable identifier __attribute__((swift_name("identifier")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreServerGetServiceAuthResponse")))
@interface KbskyCoreServerGetServiceAuthResponse : KbskyBase
- (instancetype)initWithToken:(NSString *)token __attribute__((swift_name("init(token:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreServerGetServiceAuthResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreServerGetServiceAuthResponse *)doCopyToken:(NSString *)token __attribute__((swift_name("doCopy(token:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *token __attribute__((swift_name("token")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreServerGetServiceAuthRequest")))
@interface KbskyCoreServerGetServiceAuthRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth aud:(NSString *)aud exp:(KbskyLong * _Nullable)exp lxm:(NSString * _Nullable)lxm __attribute__((swift_name("init(auth:aud:exp:lxm:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreServerGetServiceAuthRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth aud:(NSString *)aud exp:(KbskyLong * _Nullable)exp lxm:(NSString * _Nullable)lxm __attribute__((swift_name("doCopy(auth:aud:exp:lxm:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *aud __attribute__((swift_name("aud")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property (readonly) KbskyLong * _Nullable exp __attribute__((swift_name("exp")));
@property (readonly) NSString * _Nullable lxm __attribute__((swift_name("lxm")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreServerGetSessionResponse")))
@interface KbskyCoreServerGetSessionResponse : KbskyBase
- (instancetype)initWithHandle:(NSString *)handle did:(NSString *)did email:(NSString * _Nullable)email emailConfirmed:(KbskyBoolean * _Nullable)emailConfirmed emailAuthFactor:(KbskyBoolean * _Nullable)emailAuthFactor didDoc:(KbskyCoreDidDocUnion * _Nullable)didDoc active:(KbskyBoolean * _Nullable)active __attribute__((swift_name("init(handle:did:email:emailConfirmed:emailAuthFactor:didDoc:active:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreServerGetSessionResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreServerGetSessionResponse *)doCopyHandle:(NSString *)handle did:(NSString *)did email:(NSString * _Nullable)email emailConfirmed:(KbskyBoolean * _Nullable)emailConfirmed emailAuthFactor:(KbskyBoolean * _Nullable)emailAuthFactor didDoc:(KbskyCoreDidDocUnion * _Nullable)didDoc active:(KbskyBoolean * _Nullable)active __attribute__((swift_name("doCopy(handle:did:email:emailConfirmed:emailAuthFactor:didDoc:active:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KbskyBoolean * _Nullable active __attribute__((swift_name("active")));
@property NSString *did __attribute__((swift_name("did")));
@property KbskyCoreDidDocUnion * _Nullable didDoc __attribute__((swift_name("didDoc")));
@property NSString * _Nullable email __attribute__((swift_name("email")));
@property KbskyBoolean * _Nullable emailAuthFactor __attribute__((swift_name("emailAuthFactor")));
@property KbskyBoolean * _Nullable emailConfirmed __attribute__((swift_name("emailConfirmed")));
@property NSString *handle __attribute__((swift_name("handle")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreServerRefreshSessionResponse")))
@interface KbskyCoreServerRefreshSessionResponse : KbskyBase
- (instancetype)initWithAccessJwt:(NSString *)accessJwt refreshJwt:(NSString *)refreshJwt handle:(NSString *)handle did:(NSString *)did didDoc:(KbskyCoreDidDocUnion * _Nullable)didDoc active:(KbskyBoolean * _Nullable)active __attribute__((swift_name("init(accessJwt:refreshJwt:handle:did:didDoc:active:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreServerRefreshSessionResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreServerRefreshSessionResponse *)doCopyAccessJwt:(NSString *)accessJwt refreshJwt:(NSString *)refreshJwt handle:(NSString *)handle did:(NSString *)did didDoc:(KbskyCoreDidDocUnion * _Nullable)didDoc active:(KbskyBoolean * _Nullable)active __attribute__((swift_name("doCopy(accessJwt:refreshJwt:handle:did:didDoc:active:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *accessJwt __attribute__((swift_name("accessJwt")));
@property KbskyBoolean * _Nullable active __attribute__((swift_name("active")));
@property NSString *did __attribute__((swift_name("did")));
@property KbskyCoreDidDocUnion * _Nullable didDoc __attribute__((swift_name("didDoc")));
@property NSString *handle __attribute__((swift_name("handle")));
@property NSString *refreshJwt __attribute__((swift_name("refreshJwt")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorGetPreferencesResponse")))
@interface KbskyCoreActorGetPreferencesResponse : KbskyBase
- (instancetype)initWithPreferences:(NSArray<KbskyCoreActorDefsPreferencesUnion *> *)preferences __attribute__((swift_name("init(preferences:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreActorGetPreferencesResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreActorGetPreferencesResponse *)doCopyPreferences:(NSArray<KbskyCoreActorDefsPreferencesUnion *> *)preferences __attribute__((swift_name("doCopy(preferences:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSArray<KbskyCoreActorDefsPreferencesUnion *> *preferences __attribute__((swift_name("preferences")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorGetPreferencesRequest")))
@interface KbskyCoreActorGetPreferencesRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer));
- (KbskyCoreActorGetPreferencesRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("doCopy(auth:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CoreActorDefsProfileViewDetailed")))
@interface KbskyCoreActorDefsProfileViewDetailed : KbskyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 did:(NSString * _Nullable)did handle:(NSString * _Nullable)handle displayName:(NSString * _Nullable)displayName description:(NSString * _Nullable)description avatar:(NSString * _Nullable)avatar banner:(NSString * _Nullable)banner followersCount:(KbskyInt * _Nullable)followersCount followsCount:(KbskyInt * _Nullable)followsCount postsCount:(KbskyInt * _Nullable)postsCount associated:(KbskyCoreActorDefsProfileAssociated * _Nullable)associated indexedAt:(NSString * _Nullable)indexedAt createdAt:(NSString * _Nullable)createdAt viewer:(KbskyCoreActorDefsViewerState * _Nullable)viewer labels:(NSArray<KbskyCoreLabelDefsLabel *> * _Nullable)labels pinnedPost:(KbskyCoreRepoStrongRef * _Nullable)pinnedPost verification:(KbskyCoreActorDefsVerificationState * _Nullable)verification serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:did:handle:displayName:description:avatar:banner:followersCount:followsCount:postsCount:associated:indexedAt:createdAt:viewer:labels:pinnedPost:verification:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreActorDefsProfileViewDetailedCompanion *companion __attribute__((swift_name("companion")));
@property KbskyCoreActorDefsProfileAssociated * _Nullable associated __attribute__((swift_name("associated")));
@property NSString * _Nullable avatar __attribute__((swift_name("avatar")));
@property NSString * _Nullable banner __attribute__((swift_name("banner")));
@property NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property (setter=setDescription:) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property NSString *did __attribute__((swift_name("did")));
@property NSString * _Nullable displayName __attribute__((swift_name("displayName")));
@property KbskyInt * _Nullable followersCount __attribute__((swift_name("followersCount")));
@property KbskyInt * _Nullable followsCount __attribute__((swift_name("followsCount")));
@property NSString *handle __attribute__((swift_name("handle")));
@property NSString * _Nullable indexedAt __attribute__((swift_name("indexedAt")));
@property NSArray<KbskyCoreLabelDefsLabel *> * _Nullable labels __attribute__((swift_name("labels")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=work/socialhub/kbsky/util/json/PinnedPostSerializer))
*/
@property KbskyCoreRepoStrongRef * _Nullable pinnedPost __attribute__((swift_name("pinnedPost")));
@property KbskyInt * _Nullable postsCount __attribute__((swift_name("postsCount")));
@property KbskyCoreActorDefsVerificationState * _Nullable verification __attribute__((swift_name("verification")));
@property KbskyCoreActorDefsViewerState * _Nullable viewer __attribute__((swift_name("viewer")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorGetProfileResponse")))
@interface KbskyCoreActorGetProfileResponse : KbskyCoreActorDefsProfileViewDetailed
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 did:(NSString * _Nullable)did handle:(NSString * _Nullable)handle displayName:(NSString * _Nullable)displayName description:(NSString * _Nullable)description avatar:(NSString * _Nullable)avatar banner:(NSString * _Nullable)banner followersCount:(KbskyInt * _Nullable)followersCount followsCount:(KbskyInt * _Nullable)followsCount postsCount:(KbskyInt * _Nullable)postsCount associated:(KbskyCoreActorDefsProfileAssociated * _Nullable)associated indexedAt:(NSString * _Nullable)indexedAt createdAt:(NSString * _Nullable)createdAt viewer:(KbskyCoreActorDefsViewerState * _Nullable)viewer labels:(NSArray<KbskyCoreLabelDefsLabel *> * _Nullable)labels pinnedPost:(KbskyCoreRepoStrongRef * _Nullable)pinnedPost verification:(KbskyCoreActorDefsVerificationState * _Nullable)verification serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:did:handle:displayName:description:avatar:banner:followersCount:followsCount:postsCount:associated:indexedAt:createdAt:viewer:labels:pinnedPost:verification:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreActorGetProfileResponseCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorGetProfileRequest")))
@interface KbskyCoreActorGetProfileRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth actor:(NSString * _Nullable)actor __attribute__((swift_name("init(auth:actor:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreActorGetProfileRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth actor:(NSString * _Nullable)actor __attribute__((swift_name("doCopy(auth:actor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable actor __attribute__((swift_name("actor")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorGetProfilesResponse")))
@interface KbskyCoreActorGetProfilesResponse : KbskyBase
- (instancetype)initWithProfiles:(NSArray<KbskyCoreActorDefsProfileViewDetailed *> *)profiles __attribute__((swift_name("init(profiles:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreActorGetProfilesResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreActorGetProfilesResponse *)doCopyProfiles:(NSArray<KbskyCoreActorDefsProfileViewDetailed *> *)profiles __attribute__((swift_name("doCopy(profiles:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSArray<KbskyCoreActorDefsProfileViewDetailed *> *profiles __attribute__((swift_name("profiles")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorGetProfilesRequest")))
@interface KbskyCoreActorGetProfilesRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth actors:(NSArray<NSString *> * _Nullable)actors __attribute__((swift_name("init(auth:actors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreActorGetProfilesRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth actors:(NSArray<NSString *> * _Nullable)actors __attribute__((swift_name("doCopy(auth:actors:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSArray<NSString *> * _Nullable actors __attribute__((swift_name("actors")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorSearchActorsResponse")))
@interface KbskyCoreActorSearchActorsResponse : KbskyBase
- (instancetype)initWithCursor:(NSString * _Nullable)cursor actors:(NSArray<KbskyCoreActorDefsProfileView *> *)actors __attribute__((swift_name("init(cursor:actors:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreActorSearchActorsResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreActorSearchActorsResponse *)doCopyCursor:(NSString * _Nullable)cursor actors:(NSArray<KbskyCoreActorDefsProfileView *> *)actors __attribute__((swift_name("doCopy(cursor:actors:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSArray<KbskyCoreActorDefsProfileView *> *actors __attribute__((swift_name("actors")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorSearchActorsRequest")))
@interface KbskyCoreActorSearchActorsRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth term:(NSString * _Nullable)term q:(NSString * _Nullable)q limit:(KbskyInt * _Nullable)limit cursor:(NSString * _Nullable)cursor __attribute__((swift_name("init(auth:term:q:limit:cursor:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreActorSearchActorsRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth term:(NSString * _Nullable)term q:(NSString * _Nullable)q limit:(KbskyInt * _Nullable)limit cursor:(NSString * _Nullable)cursor __attribute__((swift_name("doCopy(auth:term:q:limit:cursor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property KbskyInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString * _Nullable q __attribute__((swift_name("q")));
@property NSString * _Nullable term __attribute__((swift_name("term")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorSearchActorsTypeaheadResponse")))
@interface KbskyCoreActorSearchActorsTypeaheadResponse : KbskyBase
- (instancetype)initWithActors:(NSArray<KbskyCoreActorDefsProfileView *> *)actors __attribute__((swift_name("init(actors:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreActorSearchActorsTypeaheadResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreActorSearchActorsTypeaheadResponse *)doCopyActors:(NSArray<KbskyCoreActorDefsProfileView *> *)actors __attribute__((swift_name("doCopy(actors:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSArray<KbskyCoreActorDefsProfileView *> *actors __attribute__((swift_name("actors")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorSearchActorsTypeaheadRequest")))
@interface KbskyCoreActorSearchActorsTypeaheadRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth term:(NSString * _Nullable)term q:(NSString * _Nullable)q limit:(KbskyInt * _Nullable)limit __attribute__((swift_name("init(auth:term:q:limit:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreActorSearchActorsTypeaheadRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth term:(NSString * _Nullable)term q:(NSString * _Nullable)q limit:(KbskyInt * _Nullable)limit __attribute__((swift_name("doCopy(auth:term:q:limit:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property KbskyInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString * _Nullable q __attribute__((swift_name("q")));
@property NSString * _Nullable term __attribute__((swift_name("term")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorUpdateProfileResponse")))
@interface KbskyCoreActorUpdateProfileResponse : KbskyCoreRepoPutRecordResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 uri:(NSString * _Nullable)uri cid:(NSString * _Nullable)cid serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:uri:cid:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreActorUpdateProfileResponseCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorUpdateProfileRequest")))
@interface KbskyCoreActorUpdateProfileRequest : KbskyCoreAuthRequest
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth displayName:(NSString * _Nullable)displayName description:(NSString * _Nullable)description avatar:(KbskyCoreBlob * _Nullable)avatar banner:(KbskyCoreBlob * _Nullable)banner clearBanner:(BOOL)clearBanner pinnedPost:(KbskyCoreRepoStrongRef * _Nullable)pinnedPost clearPinnedPost:(BOOL)clearPinnedPost __attribute__((swift_name("init(auth:displayName:description:avatar:banner:clearBanner:pinnedPost:clearPinnedPost:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreActorUpdateProfileRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth displayName:(NSString * _Nullable)displayName description:(NSString * _Nullable)description avatar:(KbskyCoreBlob * _Nullable)avatar banner:(KbskyCoreBlob * _Nullable)banner clearBanner:(BOOL)clearBanner pinnedPost:(KbskyCoreRepoStrongRef * _Nullable)pinnedPost clearPinnedPost:(BOOL)clearPinnedPost __attribute__((swift_name("doCopy(auth:displayName:description:avatar:banner:clearBanner:pinnedPost:clearPinnedPost:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property (readonly) KbskyCoreBlob * _Nullable avatar __attribute__((swift_name("avatar")));
@property (readonly) KbskyCoreBlob * _Nullable banner __attribute__((swift_name("banner")));
@property (readonly) BOOL clearBanner __attribute__((swift_name("clearBanner")));
@property (readonly) BOOL clearPinnedPost __attribute__((swift_name("clearPinnedPost")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) NSString * _Nullable displayName __attribute__((swift_name("displayName")));
@property (readonly) KbskyCoreRepoStrongRef * _Nullable pinnedPost __attribute__((swift_name("pinnedPost")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoAddReactionResponse")))
@interface KbskyCoreConvoAddReactionResponse : KbskyBase
- (instancetype)initWithMessage:(KbskyCoreConvoDefsMessageView *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreConvoAddReactionResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreConvoAddReactionResponse *)doCopyMessage:(KbskyCoreConvoDefsMessageView *)message __attribute__((swift_name("doCopy(message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KbskyCoreConvoDefsMessageView *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoAddReactionRequest")))
@interface KbskyCoreConvoAddReactionRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth convoId:(NSString *)convoId messageId:(NSString *)messageId value:(NSString *)value __attribute__((swift_name("init(auth:convoId:messageId:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreConvoAddReactionRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth convoId:(NSString *)convoId messageId:(NSString *)messageId value:(NSString *)value __attribute__((swift_name("doCopy(auth:convoId:messageId:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property (readonly) NSString *convoId __attribute__((swift_name("convoId")));
@property (readonly) NSString *messageId __attribute__((swift_name("messageId")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=work/socialhub/kbsky/util/json/ChatConvoDefsMessageUnionSerializer))
*/
__attribute__((swift_name("CoreConvoDefsMessageUnion")))
@interface KbskyCoreConvoDefsMessageUnion : KbskyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KbskyCoreConvoDefsMessageUnionCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) KbskyCoreConvoDefsDeletedMessageView * _Nullable asDeletedMessageView __attribute__((swift_name("asDeletedMessageView")));
@property (readonly) KbskyCoreConvoDefsMessageView * _Nullable asMessageView __attribute__((swift_name("asMessageView")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoDefsDeletedMessageView")))
@interface KbskyCoreConvoDefsDeletedMessageView : KbskyCoreConvoDefsMessageUnion
- (instancetype)initWithType:(NSString *)type id:(NSString *)id rev:(NSString *)rev sender:(KbskyCoreConvoDefsMessageViewSender *)sender sentAt:(NSString *)sentAt __attribute__((swift_name("init(type:id:rev:sender:sentAt:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreConvoDefsDeletedMessageViewCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreConvoDefsDeletedMessageView *)doCopyType:(NSString *)type id:(NSString *)id rev:(NSString *)rev sender:(KbskyCoreConvoDefsMessageViewSender *)sender sentAt:(NSString *)sentAt __attribute__((swift_name("doCopy(type:id:rev:sender:sentAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *id __attribute__((swift_name("id")));
@property NSString *rev __attribute__((swift_name("rev")));
@property KbskyCoreConvoDefsMessageViewSender *sender __attribute__((swift_name("sender")));
@property NSString *sentAt __attribute__((swift_name("sentAt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoDeleteMessageForSelfRequest")))
@interface KbskyCoreConvoDeleteMessageForSelfRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth convoId:(NSString *)convoId messageId:(NSString *)messageId __attribute__((swift_name("init(auth:convoId:messageId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreConvoDeleteMessageForSelfRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth convoId:(NSString *)convoId messageId:(NSString *)messageId __attribute__((swift_name("doCopy(auth:convoId:messageId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSString *convoId __attribute__((swift_name("convoId")));
@property NSString *messageId __attribute__((swift_name("messageId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoGetConvoResponse")))
@interface KbskyCoreConvoGetConvoResponse : KbskyBase
- (instancetype)initWithConvo:(KbskyCoreConvoDefsConvoView *)convo __attribute__((swift_name("init(convo:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreConvoGetConvoResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreConvoGetConvoResponse *)doCopyConvo:(KbskyCoreConvoDefsConvoView *)convo __attribute__((swift_name("doCopy(convo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KbskyCoreConvoDefsConvoView *convo __attribute__((swift_name("convo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoGetConvoRequest")))
@interface KbskyCoreConvoGetConvoRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth convoId:(NSString *)convoId __attribute__((swift_name("init(auth:convoId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreConvoGetConvoRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth convoId:(NSString *)convoId __attribute__((swift_name("doCopy(auth:convoId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSString *convoId __attribute__((swift_name("convoId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoGetConvoForMembersResponse")))
@interface KbskyCoreConvoGetConvoForMembersResponse : KbskyBase
- (instancetype)initWithConvo:(KbskyCoreConvoDefsConvoView *)convo __attribute__((swift_name("init(convo:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreConvoGetConvoForMembersResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreConvoGetConvoForMembersResponse *)doCopyConvo:(KbskyCoreConvoDefsConvoView *)convo __attribute__((swift_name("doCopy(convo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KbskyCoreConvoDefsConvoView *convo __attribute__((swift_name("convo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoGetConvoForMembersRequest")))
@interface KbskyCoreConvoGetConvoForMembersRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth members:(NSArray<NSString *> *)members __attribute__((swift_name("init(auth:members:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreConvoGetConvoForMembersRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth members:(NSArray<NSString *> *)members __attribute__((swift_name("doCopy(auth:members:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSArray<NSString *> *members __attribute__((swift_name("members")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoGetListConvosResponse")))
@interface KbskyCoreConvoGetListConvosResponse : KbskyBase
- (instancetype)initWithCursor:(NSString * _Nullable)cursor convos:(NSArray<KbskyCoreConvoDefsConvoView *> *)convos __attribute__((swift_name("init(cursor:convos:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreConvoGetListConvosResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreConvoGetListConvosResponse *)doCopyCursor:(NSString * _Nullable)cursor convos:(NSArray<KbskyCoreConvoDefsConvoView *> *)convos __attribute__((swift_name("doCopy(cursor:convos:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSArray<KbskyCoreConvoDefsConvoView *> *convos __attribute__((swift_name("convos")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoGetListConvosRequest")))
@interface KbskyCoreConvoGetListConvosRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth limit:(KbskyInt * _Nullable)limit cursor:(NSString * _Nullable)cursor __attribute__((swift_name("init(auth:limit:cursor:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreConvoGetListConvosRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth limit:(KbskyInt * _Nullable)limit cursor:(NSString * _Nullable)cursor __attribute__((swift_name("doCopy(auth:limit:cursor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property KbskyInt * _Nullable limit __attribute__((swift_name("limit")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoGetLogResponse")))
@interface KbskyCoreConvoGetLogResponse : KbskyBase
- (instancetype)initWithLogs:(NSArray<KbskyCoreConvoDefsLogUnion *> *)logs __attribute__((swift_name("init(logs:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreConvoGetLogResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreConvoGetLogResponse *)doCopyLogs:(NSArray<KbskyCoreConvoDefsLogUnion *> *)logs __attribute__((swift_name("doCopy(logs:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSArray<KbskyCoreConvoDefsLogUnion *> *logs __attribute__((swift_name("logs")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoGetLogRequest")))
@interface KbskyCoreConvoGetLogRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth cursor:(NSString *)cursor __attribute__((swift_name("init(auth:cursor:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreConvoGetLogRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth cursor:(NSString *)cursor __attribute__((swift_name("doCopy(auth:cursor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSString *cursor __attribute__((swift_name("cursor")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoGetMessagesResponse")))
@interface KbskyCoreConvoGetMessagesResponse : KbskyBase
- (instancetype)initWithCursor:(NSString * _Nullable)cursor messages:(NSArray<KbskyCoreConvoDefsMessageUnion *> *)messages __attribute__((swift_name("init(cursor:messages:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreConvoGetMessagesResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreConvoGetMessagesResponse *)doCopyCursor:(NSString * _Nullable)cursor messages:(NSArray<KbskyCoreConvoDefsMessageUnion *> *)messages __attribute__((swift_name("doCopy(cursor:messages:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property NSArray<KbskyCoreConvoDefsMessageUnion *> *messages __attribute__((swift_name("messages")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoGetMessagesRequest")))
@interface KbskyCoreConvoGetMessagesRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth convoId:(NSString *)convoId limit:(KbskyInt * _Nullable)limit cursor:(NSString * _Nullable)cursor __attribute__((swift_name("init(auth:convoId:limit:cursor:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreConvoGetMessagesRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth convoId:(NSString *)convoId limit:(KbskyInt * _Nullable)limit cursor:(NSString * _Nullable)cursor __attribute__((swift_name("doCopy(auth:convoId:limit:cursor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSString *convoId __attribute__((swift_name("convoId")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property KbskyInt * _Nullable limit __attribute__((swift_name("limit")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoLeaveConvoResponse")))
@interface KbskyCoreConvoLeaveConvoResponse : KbskyBase
- (instancetype)initWithConvoId:(NSString *)convoId rev:(NSString *)rev __attribute__((swift_name("init(convoId:rev:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreConvoLeaveConvoResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreConvoLeaveConvoResponse *)doCopyConvoId:(NSString *)convoId rev:(NSString *)rev __attribute__((swift_name("doCopy(convoId:rev:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *convoId __attribute__((swift_name("convoId")));
@property NSString *rev __attribute__((swift_name("rev")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoLeaveConvoRequest")))
@interface KbskyCoreConvoLeaveConvoRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth convoId:(NSString *)convoId __attribute__((swift_name("init(auth:convoId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreConvoLeaveConvoRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth convoId:(NSString *)convoId __attribute__((swift_name("doCopy(auth:convoId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSString *convoId __attribute__((swift_name("convoId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoMuteConvoResponse")))
@interface KbskyCoreConvoMuteConvoResponse : KbskyBase
- (instancetype)initWithConvo:(KbskyCoreConvoDefsConvoView *)convo __attribute__((swift_name("init(convo:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreConvoMuteConvoResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreConvoMuteConvoResponse *)doCopyConvo:(KbskyCoreConvoDefsConvoView *)convo __attribute__((swift_name("doCopy(convo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KbskyCoreConvoDefsConvoView *convo __attribute__((swift_name("convo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoMuteConvoRequest")))
@interface KbskyCoreConvoMuteConvoRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth convoId:(NSString *)convoId __attribute__((swift_name("init(auth:convoId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreConvoMuteConvoRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth convoId:(NSString *)convoId __attribute__((swift_name("doCopy(auth:convoId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSString *convoId __attribute__((swift_name("convoId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoRemoveReactionResponse")))
@interface KbskyCoreConvoRemoveReactionResponse : KbskyBase
- (instancetype)initWithMessage:(KbskyCoreConvoDefsMessageView *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreConvoRemoveReactionResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreConvoRemoveReactionResponse *)doCopyMessage:(KbskyCoreConvoDefsMessageView *)message __attribute__((swift_name("doCopy(message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KbskyCoreConvoDefsMessageView *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoRemoveReactionRequest")))
@interface KbskyCoreConvoRemoveReactionRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth convoId:(NSString *)convoId messageId:(NSString *)messageId value:(NSString *)value __attribute__((swift_name("init(auth:convoId:messageId:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreConvoRemoveReactionRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth convoId:(NSString *)convoId messageId:(NSString *)messageId value:(NSString *)value __attribute__((swift_name("doCopy(auth:convoId:messageId:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property (readonly) NSString *convoId __attribute__((swift_name("convoId")));
@property (readonly) NSString *messageId __attribute__((swift_name("messageId")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoDefsMessageView")))
@interface KbskyCoreConvoDefsMessageView : KbskyCoreConvoDefsMessageUnion
- (instancetype)initWithType:(NSString *)type id:(NSString *)id rev:(NSString *)rev text:(NSString *)text facets:(NSArray<KbskyCoreRichtextFacet *> * _Nullable)facets embed:(KbskyCoreRecordUnion * _Nullable)embed reactions:(NSArray<KbskyCoreConvoDefsReactionView *> *)reactions sender:(KbskyCoreConvoDefsMessageViewSender *)sender sentAt:(NSString *)sentAt __attribute__((swift_name("init(type:id:rev:text:facets:embed:reactions:sender:sentAt:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreConvoDefsMessageViewCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreConvoDefsMessageView *)doCopyType:(NSString *)type id:(NSString *)id rev:(NSString *)rev text:(NSString *)text facets:(NSArray<KbskyCoreRichtextFacet *> * _Nullable)facets embed:(KbskyCoreRecordUnion * _Nullable)embed reactions:(NSArray<KbskyCoreConvoDefsReactionView *> *)reactions sender:(KbskyCoreConvoDefsMessageViewSender *)sender sentAt:(NSString *)sentAt __attribute__((swift_name("doCopy(type:id:rev:text:facets:embed:reactions:sender:sentAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KbskyCoreRecordUnion * _Nullable embed __attribute__((swift_name("embed")));
@property (readonly) NSArray<KbskyCoreRichtextFacet *> * _Nullable facets __attribute__((swift_name("facets")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSArray<KbskyCoreConvoDefsReactionView *> *reactions __attribute__((swift_name("reactions")));
@property (readonly) NSString *rev __attribute__((swift_name("rev")));
@property (readonly) KbskyCoreConvoDefsMessageViewSender *sender __attribute__((swift_name("sender")));
@property (readonly) NSString *sentAt __attribute__((swift_name("sentAt")));
@property (readonly) NSString *text __attribute__((swift_name("text")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoSendMessageRequest")))
@interface KbskyCoreConvoSendMessageRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth convoId:(NSString *)convoId message:(KbskyCoreConvoDefsMessageInput * _Nullable)message __attribute__((swift_name("init(auth:convoId:message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreConvoSendMessageRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth convoId:(NSString *)convoId message:(KbskyCoreConvoDefsMessageInput * _Nullable)message __attribute__((swift_name("doCopy(auth:convoId:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSString *convoId __attribute__((swift_name("convoId")));
@property KbskyCoreConvoDefsMessageInput * _Nullable message __attribute__((swift_name("message")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoUnmuteConvoResponse")))
@interface KbskyCoreConvoUnmuteConvoResponse : KbskyBase
- (instancetype)initWithConvo:(KbskyCoreConvoDefsConvoView *)convo __attribute__((swift_name("init(convo:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreConvoUnmuteConvoResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreConvoUnmuteConvoResponse *)doCopyConvo:(KbskyCoreConvoDefsConvoView *)convo __attribute__((swift_name("doCopy(convo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KbskyCoreConvoDefsConvoView *convo __attribute__((swift_name("convo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoUnmuteConvoRequest")))
@interface KbskyCoreConvoUnmuteConvoRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth convoId:(NSString *)convoId __attribute__((swift_name("init(auth:convoId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreConvoUnmuteConvoRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth convoId:(NSString *)convoId __attribute__((swift_name("doCopy(auth:convoId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSString *convoId __attribute__((swift_name("convoId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoUpdateReadResponse")))
@interface KbskyCoreConvoUpdateReadResponse : KbskyBase
- (instancetype)initWithConvo:(KbskyCoreConvoDefsConvoView *)convo __attribute__((swift_name("init(convo:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreConvoUpdateReadResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreConvoUpdateReadResponse *)doCopyConvo:(KbskyCoreConvoDefsConvoView *)convo __attribute__((swift_name("doCopy(convo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KbskyCoreConvoDefsConvoView *convo __attribute__((swift_name("convo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoUpdateReadRequest")))
@interface KbskyCoreConvoUpdateReadRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth convoId:(NSString *)convoId messageId:(NSString *)messageId __attribute__((swift_name("init(auth:convoId:messageId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreConvoUpdateReadRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth convoId:(NSString *)convoId messageId:(NSString *)messageId __attribute__((swift_name("doCopy(auth:convoId:messageId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSString *convoId __attribute__((swift_name("convoId")));
@property NSString *messageId __attribute__((swift_name("messageId")));
@end

__attribute__((swift_name("CoreRKeyRequest")))
@protocol KbskyCoreRKeyRequest
@required
- (NSString * _Nullable)rkey __attribute__((swift_name("rkey()")));
@property (getter=rkey_) NSString * _Nullable rkey __attribute__((swift_name("rkey")));
@property NSString * _Nullable uri __attribute__((swift_name("uri")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedDeleteLikeRequest")))
@interface KbskyCoreFeedDeleteLikeRequest : KbskyCoreAuthRequest <KbskyCoreRKeyRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth uri:(NSString * _Nullable)uri rkey:(NSString * _Nullable)rkey __attribute__((swift_name("init(auth:uri:rkey:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreFeedDeleteLikeRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth uri:(NSString * _Nullable)uri rkey:(NSString * _Nullable)rkey __attribute__((swift_name("doCopy(auth:uri:rkey:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property (getter=rkey_) NSString * _Nullable rkey __attribute__((swift_name("rkey")));
@property NSString * _Nullable uri __attribute__((swift_name("uri")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedDeletePostRequest")))
@interface KbskyCoreFeedDeletePostRequest : KbskyCoreAuthRequest <KbskyCoreRKeyRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth uri:(NSString * _Nullable)uri rkey:(NSString * _Nullable)rkey __attribute__((swift_name("init(auth:uri:rkey:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreFeedDeletePostRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth uri:(NSString * _Nullable)uri rkey:(NSString * _Nullable)rkey __attribute__((swift_name("doCopy(auth:uri:rkey:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property (getter=rkey_) NSString * _Nullable rkey __attribute__((swift_name("rkey")));
@property NSString * _Nullable uri __attribute__((swift_name("uri")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedDeleteRepostRequest")))
@interface KbskyCoreFeedDeleteRepostRequest : KbskyCoreAuthRequest <KbskyCoreRKeyRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth uri:(NSString * _Nullable)uri rkey:(NSString * _Nullable)rkey __attribute__((swift_name("init(auth:uri:rkey:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreFeedDeleteRepostRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth uri:(NSString * _Nullable)uri rkey:(NSString * _Nullable)rkey __attribute__((swift_name("doCopy(auth:uri:rkey:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property (getter=rkey_) NSString * _Nullable rkey __attribute__((swift_name("rkey")));
@property NSString * _Nullable uri __attribute__((swift_name("uri")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedGetActorFeedsResponse")))
@interface KbskyCoreFeedGetActorFeedsResponse : KbskyBase
- (instancetype)initWithCursor:(NSString * _Nullable)cursor feeds:(NSArray<KbskyCoreFeedDefsGeneratorView *> *)feeds __attribute__((swift_name("init(cursor:feeds:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreFeedGetActorFeedsResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreFeedGetActorFeedsResponse *)doCopyCursor:(NSString * _Nullable)cursor feeds:(NSArray<KbskyCoreFeedDefsGeneratorView *> *)feeds __attribute__((swift_name("doCopy(cursor:feeds:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property NSArray<KbskyCoreFeedDefsGeneratorView *> *feeds __attribute__((swift_name("feeds")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedGetActorFeedsRequest")))
@interface KbskyCoreFeedGetActorFeedsRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth actor:(NSString * _Nullable)actor limit:(KbskyInt * _Nullable)limit cursor:(NSString * _Nullable)cursor __attribute__((swift_name("init(auth:actor:limit:cursor:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreFeedGetActorFeedsRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth actor:(NSString * _Nullable)actor limit:(KbskyInt * _Nullable)limit cursor:(NSString * _Nullable)cursor __attribute__((swift_name("doCopy(auth:actor:limit:cursor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable actor __attribute__((swift_name("actor")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property KbskyInt * _Nullable limit __attribute__((swift_name("limit")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedGetActorLikesResponse")))
@interface KbskyCoreFeedGetActorLikesResponse : KbskyBase
- (instancetype)initWithCursor:(NSString * _Nullable)cursor feed:(NSArray<KbskyCoreFeedDefsFeedViewPost *> *)feed __attribute__((swift_name("init(cursor:feed:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreFeedGetActorLikesResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreFeedGetActorLikesResponse *)doCopyCursor:(NSString * _Nullable)cursor feed:(NSArray<KbskyCoreFeedDefsFeedViewPost *> *)feed __attribute__((swift_name("doCopy(cursor:feed:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property NSArray<KbskyCoreFeedDefsFeedViewPost *> *feed __attribute__((swift_name("feed")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedGetActorLikesRequest")))
@interface KbskyCoreFeedGetActorLikesRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth actor:(NSString * _Nullable)actor limit:(KbskyInt * _Nullable)limit cursor:(NSString * _Nullable)cursor __attribute__((swift_name("init(auth:actor:limit:cursor:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreFeedGetActorLikesRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth actor:(NSString * _Nullable)actor limit:(KbskyInt * _Nullable)limit cursor:(NSString * _Nullable)cursor __attribute__((swift_name("doCopy(auth:actor:limit:cursor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable actor __attribute__((swift_name("actor")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property KbskyInt * _Nullable limit __attribute__((swift_name("limit")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedGetAuthorFeedResponse")))
@interface KbskyCoreFeedGetAuthorFeedResponse : KbskyBase
- (instancetype)initWithCursor:(NSString * _Nullable)cursor feed:(NSArray<KbskyCoreFeedDefsFeedViewPost *> *)feed __attribute__((swift_name("init(cursor:feed:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreFeedGetAuthorFeedResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreFeedGetAuthorFeedResponse *)doCopyCursor:(NSString * _Nullable)cursor feed:(NSArray<KbskyCoreFeedDefsFeedViewPost *> *)feed __attribute__((swift_name("doCopy(cursor:feed:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property NSArray<KbskyCoreFeedDefsFeedViewPost *> *feed __attribute__((swift_name("feed")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedGetAuthorFeedRequest")))
@interface KbskyCoreFeedGetAuthorFeedRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth actor:(NSString *)actor limit:(KbskyInt * _Nullable)limit cursor:(NSString * _Nullable)cursor filter:(KbskyCoreFeedGetAuthorFeedRequestFilter * _Nullable)filter includePins:(BOOL)includePins __attribute__((swift_name("init(auth:actor:limit:cursor:filter:includePins:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreFeedGetAuthorFeedRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth actor:(NSString *)actor limit:(KbskyInt * _Nullable)limit cursor:(NSString * _Nullable)cursor filter:(KbskyCoreFeedGetAuthorFeedRequestFilter * _Nullable)filter includePins:(BOOL)includePins __attribute__((swift_name("doCopy(auth:actor:limit:cursor:filter:includePins:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *actor __attribute__((swift_name("actor")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property KbskyCoreFeedGetAuthorFeedRequestFilter * _Nullable filter __attribute__((swift_name("filter")));
@property BOOL includePins __attribute__((swift_name("includePins")));
@property KbskyInt * _Nullable limit __attribute__((swift_name("limit")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedGetFeedResponse")))
@interface KbskyCoreFeedGetFeedResponse : KbskyBase
- (instancetype)initWithCursor:(NSString * _Nullable)cursor feed:(NSArray<KbskyCoreFeedDefsFeedViewPost *> *)feed __attribute__((swift_name("init(cursor:feed:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreFeedGetFeedResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreFeedGetFeedResponse *)doCopyCursor:(NSString * _Nullable)cursor feed:(NSArray<KbskyCoreFeedDefsFeedViewPost *> *)feed __attribute__((swift_name("doCopy(cursor:feed:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property NSArray<KbskyCoreFeedDefsFeedViewPost *> *feed __attribute__((swift_name("feed")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedGetFeedRequest")))
@interface KbskyCoreFeedGetFeedRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth feed:(NSString * _Nullable)feed limit:(KbskyInt * _Nullable)limit cursor:(NSString * _Nullable)cursor __attribute__((swift_name("init(auth:feed:limit:cursor:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreFeedGetFeedRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth feed:(NSString * _Nullable)feed limit:(KbskyInt * _Nullable)limit cursor:(NSString * _Nullable)cursor __attribute__((swift_name("doCopy(auth:feed:limit:cursor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property NSString * _Nullable feed __attribute__((swift_name("feed")));
@property KbskyInt * _Nullable limit __attribute__((swift_name("limit")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedGetFeedGeneratorResponse")))
@interface KbskyCoreFeedGetFeedGeneratorResponse : KbskyBase
- (instancetype)initWithView:(KbskyCoreFeedDefsGeneratorView * _Nullable)view online:(KbskyBoolean * _Nullable)online valid:(KbskyBoolean * _Nullable)valid __attribute__((swift_name("init(view:online:valid:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreFeedGetFeedGeneratorResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreFeedGetFeedGeneratorResponse *)doCopyView:(KbskyCoreFeedDefsGeneratorView * _Nullable)view online:(KbskyBoolean * _Nullable)online valid:(KbskyBoolean * _Nullable)valid __attribute__((swift_name("doCopy(view:online:valid:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KbskyBoolean * _Nullable online __attribute__((swift_name("online")));
@property KbskyBoolean * _Nullable valid __attribute__((swift_name("valid")));
@property KbskyCoreFeedDefsGeneratorView * _Nullable view __attribute__((swift_name("view")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedGetFeedGeneratorRequest")))
@interface KbskyCoreFeedGetFeedGeneratorRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth feed:(NSString * _Nullable)feed __attribute__((swift_name("init(auth:feed:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreFeedGetFeedGeneratorRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth feed:(NSString * _Nullable)feed __attribute__((swift_name("doCopy(auth:feed:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSString * _Nullable feed __attribute__((swift_name("feed")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedGetFeedGeneratorsResponse")))
@interface KbskyCoreFeedGetFeedGeneratorsResponse : KbskyBase
- (instancetype)initWithFeeds:(NSArray<KbskyCoreFeedDefsGeneratorView *> *)feeds __attribute__((swift_name("init(feeds:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreFeedGetFeedGeneratorsResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreFeedGetFeedGeneratorsResponse *)doCopyFeeds:(NSArray<KbskyCoreFeedDefsGeneratorView *> *)feeds __attribute__((swift_name("doCopy(feeds:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSArray<KbskyCoreFeedDefsGeneratorView *> *feeds __attribute__((swift_name("feeds")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedGetFeedGeneratorsRequest")))
@interface KbskyCoreFeedGetFeedGeneratorsRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth feeds:(NSArray<NSString *> * _Nullable)feeds __attribute__((swift_name("init(auth:feeds:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreFeedGetFeedGeneratorsRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth feeds:(NSArray<NSString *> * _Nullable)feeds __attribute__((swift_name("doCopy(auth:feeds:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSArray<NSString *> * _Nullable feeds __attribute__((swift_name("feeds")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedGetLikesResponse")))
@interface KbskyCoreFeedGetLikesResponse : KbskyBase
- (instancetype)initWithUri:(NSString *)uri cid:(NSString * _Nullable)cid cursor:(NSString * _Nullable)cursor likes:(NSArray<KbskyCoreFeedGetLikesLike *> *)likes __attribute__((swift_name("init(uri:cid:cursor:likes:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreFeedGetLikesResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreFeedGetLikesResponse *)doCopyUri:(NSString *)uri cid:(NSString * _Nullable)cid cursor:(NSString * _Nullable)cursor likes:(NSArray<KbskyCoreFeedGetLikesLike *> *)likes __attribute__((swift_name("doCopy(uri:cid:cursor:likes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable cid __attribute__((swift_name("cid")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property NSArray<KbskyCoreFeedGetLikesLike *> *likes __attribute__((swift_name("likes")));
@property NSString *uri __attribute__((swift_name("uri")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedGetLikesRequest")))
@interface KbskyCoreFeedGetLikesRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth uri:(NSString *)uri cid:(NSString * _Nullable)cid limit:(KbskyInt * _Nullable)limit cursor:(NSString * _Nullable)cursor __attribute__((swift_name("init(auth:uri:cid:limit:cursor:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreFeedGetLikesRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth uri:(NSString *)uri cid:(NSString * _Nullable)cid limit:(KbskyInt * _Nullable)limit cursor:(NSString * _Nullable)cursor __attribute__((swift_name("doCopy(auth:uri:cid:limit:cursor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSString * _Nullable cid __attribute__((swift_name("cid")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property KbskyInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString *uri __attribute__((swift_name("uri")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedGetListFeedResponse")))
@interface KbskyCoreFeedGetListFeedResponse : KbskyBase
- (instancetype)initWithCursor:(NSString * _Nullable)cursor feed:(NSArray<KbskyCoreFeedDefsFeedViewPost *> *)feed __attribute__((swift_name("init(cursor:feed:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreFeedGetListFeedResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreFeedGetListFeedResponse *)doCopyCursor:(NSString * _Nullable)cursor feed:(NSArray<KbskyCoreFeedDefsFeedViewPost *> *)feed __attribute__((swift_name("doCopy(cursor:feed:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property NSArray<KbskyCoreFeedDefsFeedViewPost *> *feed __attribute__((swift_name("feed")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedGetListFeedRequest")))
@interface KbskyCoreFeedGetListFeedRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth list:(NSString * _Nullable)list limit:(KbskyInt * _Nullable)limit cursor:(NSString * _Nullable)cursor __attribute__((swift_name("init(auth:list:limit:cursor:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreFeedGetListFeedRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth list:(NSString * _Nullable)list limit:(KbskyInt * _Nullable)limit cursor:(NSString * _Nullable)cursor __attribute__((swift_name("doCopy(auth:list:limit:cursor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property KbskyInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString * _Nullable list __attribute__((swift_name("list")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedGetPostThreadResponse")))
@interface KbskyCoreFeedGetPostThreadResponse : KbskyBase
- (instancetype)initWithThread:(KbskyCoreFeedDefsThreadUnion * _Nullable)thread __attribute__((swift_name("init(thread:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreFeedGetPostThreadResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreFeedGetPostThreadResponse *)doCopyThread:(KbskyCoreFeedDefsThreadUnion * _Nullable)thread __attribute__((swift_name("doCopy(thread:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KbskyCoreFeedDefsThreadUnion * _Nullable thread __attribute__((swift_name("thread")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedGetPostThreadRequest")))
@interface KbskyCoreFeedGetPostThreadRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth uri:(NSString *)uri depth:(KbskyInt * _Nullable)depth __attribute__((swift_name("init(auth:uri:depth:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreFeedGetPostThreadRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth uri:(NSString *)uri depth:(KbskyInt * _Nullable)depth __attribute__((swift_name("doCopy(auth:uri:depth:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property KbskyInt * _Nullable depth __attribute__((swift_name("depth")));
@property NSString *uri __attribute__((swift_name("uri")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedGetPostsResponse")))
@interface KbskyCoreFeedGetPostsResponse : KbskyBase
- (instancetype)initWithPosts:(NSArray<KbskyCoreFeedDefsPostView *> *)posts __attribute__((swift_name("init(posts:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreFeedGetPostsResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreFeedGetPostsResponse *)doCopyPosts:(NSArray<KbskyCoreFeedDefsPostView *> *)posts __attribute__((swift_name("doCopy(posts:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSArray<KbskyCoreFeedDefsPostView *> *posts __attribute__((swift_name("posts")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedGetPostsRequest")))
@interface KbskyCoreFeedGetPostsRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth uris:(NSArray<NSString *> * _Nullable)uris __attribute__((swift_name("init(auth:uris:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreFeedGetPostsRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth uris:(NSArray<NSString *> * _Nullable)uris __attribute__((swift_name("doCopy(auth:uris:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSArray<NSString *> * _Nullable uris __attribute__((swift_name("uris")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedGetQuotesResponse")))
@interface KbskyCoreFeedGetQuotesResponse : KbskyBase
- (instancetype)initWithUri:(NSString *)uri cid:(NSString * _Nullable)cid cursor:(NSString * _Nullable)cursor posts:(NSArray<KbskyCoreFeedDefsPostView *> *)posts __attribute__((swift_name("init(uri:cid:cursor:posts:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreFeedGetQuotesResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreFeedGetQuotesResponse *)doCopyUri:(NSString *)uri cid:(NSString * _Nullable)cid cursor:(NSString * _Nullable)cursor posts:(NSArray<KbskyCoreFeedDefsPostView *> *)posts __attribute__((swift_name("doCopy(uri:cid:cursor:posts:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable cid __attribute__((swift_name("cid")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property NSArray<KbskyCoreFeedDefsPostView *> *posts __attribute__((swift_name("posts")));
@property NSString *uri __attribute__((swift_name("uri")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedGetQuotesRequest")))
@interface KbskyCoreFeedGetQuotesRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth uri:(NSString *)uri cid:(NSString * _Nullable)cid limit:(KbskyInt * _Nullable)limit cursor:(NSString * _Nullable)cursor __attribute__((swift_name("init(auth:uri:cid:limit:cursor:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreFeedGetQuotesRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth uri:(NSString *)uri cid:(NSString * _Nullable)cid limit:(KbskyInt * _Nullable)limit cursor:(NSString * _Nullable)cursor __attribute__((swift_name("doCopy(auth:uri:cid:limit:cursor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSString * _Nullable cid __attribute__((swift_name("cid")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property KbskyInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString *uri __attribute__((swift_name("uri")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedGetRepostedByResponse")))
@interface KbskyCoreFeedGetRepostedByResponse : KbskyBase
- (instancetype)initWithUri:(NSString *)uri cid:(NSString * _Nullable)cid cursor:(NSString * _Nullable)cursor repostedBy:(NSArray<KbskyCoreActorDefsProfileView *> *)repostedBy __attribute__((swift_name("init(uri:cid:cursor:repostedBy:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreFeedGetRepostedByResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreFeedGetRepostedByResponse *)doCopyUri:(NSString *)uri cid:(NSString * _Nullable)cid cursor:(NSString * _Nullable)cursor repostedBy:(NSArray<KbskyCoreActorDefsProfileView *> *)repostedBy __attribute__((swift_name("doCopy(uri:cid:cursor:repostedBy:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable cid __attribute__((swift_name("cid")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property NSArray<KbskyCoreActorDefsProfileView *> *repostedBy __attribute__((swift_name("repostedBy")));
@property NSString *uri __attribute__((swift_name("uri")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedGetRepostedByRequest")))
@interface KbskyCoreFeedGetRepostedByRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth uri:(NSString *)uri cid:(NSString * _Nullable)cid limit:(KbskyInt * _Nullable)limit cursor:(NSString * _Nullable)cursor __attribute__((swift_name("init(auth:uri:cid:limit:cursor:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreFeedGetRepostedByRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth uri:(NSString *)uri cid:(NSString * _Nullable)cid limit:(KbskyInt * _Nullable)limit cursor:(NSString * _Nullable)cursor __attribute__((swift_name("doCopy(auth:uri:cid:limit:cursor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSString * _Nullable cid __attribute__((swift_name("cid")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property KbskyInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString *uri __attribute__((swift_name("uri")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedGetTimelineResponse")))
@interface KbskyCoreFeedGetTimelineResponse : KbskyBase
- (instancetype)initWithCursor:(NSString * _Nullable)cursor feed:(NSArray<KbskyCoreFeedDefsFeedViewPost *> *)feed __attribute__((swift_name("init(cursor:feed:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreFeedGetTimelineResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreFeedGetTimelineResponse *)doCopyCursor:(NSString * _Nullable)cursor feed:(NSArray<KbskyCoreFeedDefsFeedViewPost *> *)feed __attribute__((swift_name("doCopy(cursor:feed:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property NSArray<KbskyCoreFeedDefsFeedViewPost *> *feed __attribute__((swift_name("feed")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedGetTimelineRequest")))
@interface KbskyCoreFeedGetTimelineRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth algorithm:(NSString * _Nullable)algorithm limit:(KbskyInt * _Nullable)limit cursor:(NSString * _Nullable)cursor __attribute__((swift_name("init(auth:algorithm:limit:cursor:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreFeedGetTimelineRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth algorithm:(NSString * _Nullable)algorithm limit:(KbskyInt * _Nullable)limit cursor:(NSString * _Nullable)cursor __attribute__((swift_name("doCopy(auth:algorithm:limit:cursor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable algorithm __attribute__((swift_name("algorithm")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property KbskyInt * _Nullable limit __attribute__((swift_name("limit")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedLikeResponse")))
@interface KbskyCoreFeedLikeResponse : KbskyCoreRepoCreateRecordResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 uri:(NSString * _Nullable)uri cid:(NSString * _Nullable)cid serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:uri:cid:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreFeedLikeResponseCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((swift_name("CoreRecordRequest")))
@protocol KbskyCoreRecordRequest
@required
- (NSString *)createdAt_ __attribute__((swift_name("createdAt()")));
@property NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedLikeRequest")))
@interface KbskyCoreFeedLikeRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest, KbskyCoreRecordRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth subject:(KbskyCoreRepoStrongRef * _Nullable)subject createdAt:(NSString * _Nullable)createdAt __attribute__((swift_name("init(auth:subject:createdAt:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreFeedLikeRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth subject:(KbskyCoreRepoStrongRef * _Nullable)subject createdAt:(NSString * _Nullable)createdAt __attribute__((swift_name("doCopy(auth:subject:createdAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (KbskyCoreFeedLike *)toLike __attribute__((swift_name("toLike()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property KbskyCoreRepoStrongRef * _Nullable subject __attribute__((swift_name("subject")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedPostResponse")))
@interface KbskyCoreFeedPostResponse : KbskyCoreRepoCreateRecordResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 uri:(NSString * _Nullable)uri cid:(NSString * _Nullable)cid serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:uri:cid:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreFeedPostResponseCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedPostRequest")))
@interface KbskyCoreFeedPostRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest, KbskyCoreRecordRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth text:(NSString *)text langs:(NSArray<NSString *> * _Nullable)langs labels:(KbskyCoreLabelDefsSelfLabels * _Nullable)labels facets:(NSArray<KbskyCoreRichtextFacet *> * _Nullable)facets reply:(KbskyCoreFeedPostReplyRef * _Nullable)reply embed:(KbskyCoreEmbedUnion * _Nullable)embed createdAt:(NSString * _Nullable)createdAt via:(NSString * _Nullable)via __attribute__((swift_name("init(auth:text:langs:labels:facets:reply:embed:createdAt:via:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreFeedPostRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth text:(NSString *)text langs:(NSArray<NSString *> * _Nullable)langs labels:(KbskyCoreLabelDefsSelfLabels * _Nullable)labels facets:(NSArray<KbskyCoreRichtextFacet *> * _Nullable)facets reply:(KbskyCoreFeedPostReplyRef * _Nullable)reply embed:(KbskyCoreEmbedUnion * _Nullable)embed createdAt:(NSString * _Nullable)createdAt via:(NSString * _Nullable)via __attribute__((swift_name("doCopy(auth:text:langs:labels:facets:reply:embed:createdAt:via:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (KbskyCoreFeedPost *)toPost __attribute__((swift_name("toPost()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property KbskyCoreEmbedUnion * _Nullable embed __attribute__((swift_name("embed")));
@property NSArray<KbskyCoreRichtextFacet *> * _Nullable facets __attribute__((swift_name("facets")));
@property KbskyCoreLabelDefsSelfLabels * _Nullable labels __attribute__((swift_name("labels")));
@property NSArray<NSString *> * _Nullable langs __attribute__((swift_name("langs")));
@property KbskyCoreFeedPostReplyRef * _Nullable reply __attribute__((swift_name("reply")));
@property NSString *text __attribute__((swift_name("text")));
@property NSString * _Nullable via __attribute__((swift_name("via")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedPostgateResponse")))
@interface KbskyCoreFeedPostgateResponse : KbskyCoreRepoCreateRecordResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 uri:(NSString * _Nullable)uri cid:(NSString * _Nullable)cid serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:uri:cid:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreFeedPostgateResponseCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedPostgateRequest")))
@interface KbskyCoreFeedPostgateRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest, KbskyCoreRecordRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth createdAt:(NSString * _Nullable)createdAt post:(NSString *)post detachedEmbeddingUris:(NSArray<NSString *> * _Nullable)detachedEmbeddingUris embeddingRules:(NSArray<KbskyCoreFeedPostgateEmbeddingRulesUnion *> * _Nullable)embeddingRules __attribute__((swift_name("init(auth:createdAt:post:detachedEmbeddingUris:embeddingRules:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreFeedPostgateRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth createdAt:(NSString * _Nullable)createdAt post:(NSString *)post detachedEmbeddingUris:(NSArray<NSString *> * _Nullable)detachedEmbeddingUris embeddingRules:(NSArray<KbskyCoreFeedPostgateEmbeddingRulesUnion *> * _Nullable)embeddingRules __attribute__((swift_name("doCopy(auth:createdAt:post:detachedEmbeddingUris:embeddingRules:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (KbskyCoreFeedPostgate *)toPostgate __attribute__((swift_name("toPostgate()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property NSArray<NSString *> * _Nullable detachedEmbeddingUris __attribute__((swift_name("detachedEmbeddingUris")));
@property NSArray<KbskyCoreFeedPostgateEmbeddingRulesUnion *> * _Nullable embeddingRules __attribute__((swift_name("embeddingRules")));
@property NSString *post __attribute__((swift_name("post")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedRepostResponse")))
@interface KbskyCoreFeedRepostResponse : KbskyCoreRepoCreateRecordResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 uri:(NSString * _Nullable)uri cid:(NSString * _Nullable)cid serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:uri:cid:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreFeedRepostResponseCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedRepostRequest")))
@interface KbskyCoreFeedRepostRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest, KbskyCoreRecordRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth subject:(KbskyCoreRepoStrongRef * _Nullable)subject createdAt:(NSString * _Nullable)createdAt __attribute__((swift_name("init(auth:subject:createdAt:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreFeedRepostRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth subject:(KbskyCoreRepoStrongRef * _Nullable)subject createdAt:(NSString * _Nullable)createdAt __attribute__((swift_name("doCopy(auth:subject:createdAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (KbskyCoreFeedRepost *)toRepost __attribute__((swift_name("toRepost()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property KbskyCoreRepoStrongRef * _Nullable subject __attribute__((swift_name("subject")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedSearchPostsResponse")))
@interface KbskyCoreFeedSearchPostsResponse : KbskyBase
- (instancetype)initWithCursor:(NSString * _Nullable)cursor hitsTotal:(KbskyInt * _Nullable)hitsTotal posts:(NSArray<KbskyCoreFeedDefsPostView *> *)posts __attribute__((swift_name("init(cursor:hitsTotal:posts:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreFeedSearchPostsResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreFeedSearchPostsResponse *)doCopyCursor:(NSString * _Nullable)cursor hitsTotal:(KbskyInt * _Nullable)hitsTotal posts:(NSArray<KbskyCoreFeedDefsPostView *> *)posts __attribute__((swift_name("doCopy(cursor:hitsTotal:posts:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property KbskyInt * _Nullable hitsTotal __attribute__((swift_name("hitsTotal")));
@property NSArray<KbskyCoreFeedDefsPostView *> *posts __attribute__((swift_name("posts")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedSearchPostsRequest")))
@interface KbskyCoreFeedSearchPostsRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth q:(NSString *)q limit:(KbskyInt * _Nullable)limit cursor:(NSString * _Nullable)cursor __attribute__((swift_name("init(auth:q:limit:cursor:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreFeedSearchPostsRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth q:(NSString *)q limit:(KbskyInt * _Nullable)limit cursor:(NSString * _Nullable)cursor __attribute__((swift_name("doCopy(auth:q:limit:cursor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property KbskyInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString *q __attribute__((swift_name("q")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedThreadgateResponse")))
@interface KbskyCoreFeedThreadgateResponse : KbskyCoreRepoCreateRecordResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 uri:(NSString * _Nullable)uri cid:(NSString * _Nullable)cid serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:uri:cid:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreFeedThreadgateResponseCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedThreadgateRequest")))
@interface KbskyCoreFeedThreadgateRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest, KbskyCoreRecordRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth createdAt:(NSString * _Nullable)createdAt post:(NSString *)post allow:(NSArray<KbskyCoreFeedThreadgateAllowUnion *> * _Nullable)allow __attribute__((swift_name("init(auth:createdAt:post:allow:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreFeedThreadgateRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth createdAt:(NSString * _Nullable)createdAt post:(NSString *)post allow:(NSArray<KbskyCoreFeedThreadgateAllowUnion *> * _Nullable)allow __attribute__((swift_name("doCopy(auth:createdAt:post:allow:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (KbskyCoreFeedThreadgate *)toThreadgate __attribute__((swift_name("toThreadgate()")));
@property NSArray<KbskyCoreFeedThreadgateAllowUnion *> * _Nullable allow __attribute__((swift_name("allow")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property NSString *post __attribute__((swift_name("post")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphAddUserToListRequest")))
@interface KbskyCoreGraphAddUserToListRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest, KbskyCoreRecordRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth userDid:(NSString * _Nullable)userDid listUri:(NSString * _Nullable)listUri createdAt:(NSString * _Nullable)createdAt __attribute__((swift_name("init(auth:userDid:listUri:createdAt:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreGraphAddUserToListRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth userDid:(NSString * _Nullable)userDid listUri:(NSString * _Nullable)listUri createdAt:(NSString * _Nullable)createdAt __attribute__((swift_name("doCopy(auth:userDid:listUri:createdAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (KbskyCoreGraphListItem *)toListItem __attribute__((swift_name("toListItem()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property NSString * _Nullable listUri __attribute__((swift_name("listUri")));
@property NSString * _Nullable userDid __attribute__((swift_name("userDid")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphBlockRequest")))
@interface KbskyCoreGraphBlockRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest, KbskyCoreRecordRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth subject:(NSString * _Nullable)subject createdAt:(NSString * _Nullable)createdAt __attribute__((swift_name("init(auth:subject:createdAt:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreGraphBlockRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth subject:(NSString * _Nullable)subject createdAt:(NSString * _Nullable)createdAt __attribute__((swift_name("doCopy(auth:subject:createdAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (KbskyCoreGraphBlock *)toBlock __attribute__((swift_name("toBlock()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property NSString * _Nullable subject __attribute__((swift_name("subject")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphCreateListRequest")))
@interface KbskyCoreGraphCreateListRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest, KbskyCoreRecordRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth purpose:(NSString *)purpose name:(NSString *)name description:(NSString * _Nullable)description descriptionFacets:(NSArray<KbskyCoreRichtextFacet *> * _Nullable)descriptionFacets avatar:(KbskyCoreBlob * _Nullable)avatar labels:(KbskyCoreLabelDefsSelfLabels * _Nullable)labels createdAt:(NSString * _Nullable)createdAt __attribute__((swift_name("init(auth:purpose:name:description:descriptionFacets:avatar:labels:createdAt:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreGraphCreateListRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth purpose:(NSString *)purpose name:(NSString *)name description:(NSString * _Nullable)description descriptionFacets:(NSArray<KbskyCoreRichtextFacet *> * _Nullable)descriptionFacets avatar:(KbskyCoreBlob * _Nullable)avatar labels:(KbskyCoreLabelDefsSelfLabels * _Nullable)labels createdAt:(NSString * _Nullable)createdAt __attribute__((swift_name("doCopy(auth:purpose:name:description:descriptionFacets:avatar:labels:createdAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (KbskyCoreGraphList *)toRecord __attribute__((swift_name("toRecord()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphDeleteBlockRequest")))
@interface KbskyCoreGraphDeleteBlockRequest : KbskyCoreAuthRequest <KbskyCoreRKeyRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth uri:(NSString * _Nullable)uri rkey:(NSString * _Nullable)rkey __attribute__((swift_name("init(auth:uri:rkey:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreGraphDeleteBlockRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth uri:(NSString * _Nullable)uri rkey:(NSString * _Nullable)rkey __attribute__((swift_name("doCopy(auth:uri:rkey:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property (getter=rkey_) NSString * _Nullable rkey __attribute__((swift_name("rkey")));
@property NSString * _Nullable uri __attribute__((swift_name("uri")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphDeleteFollowRequest")))
@interface KbskyCoreGraphDeleteFollowRequest : KbskyCoreAuthRequest <KbskyCoreRKeyRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth uri:(NSString * _Nullable)uri rkey:(NSString * _Nullable)rkey __attribute__((swift_name("init(auth:uri:rkey:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreGraphDeleteFollowRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth uri:(NSString * _Nullable)uri rkey:(NSString * _Nullable)rkey __attribute__((swift_name("doCopy(auth:uri:rkey:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property (getter=rkey_) NSString * _Nullable rkey __attribute__((swift_name("rkey")));
@property NSString * _Nullable uri __attribute__((swift_name("uri")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphDeleteListRequest")))
@interface KbskyCoreGraphDeleteListRequest : KbskyCoreAuthRequest
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth listUri:(NSString *)listUri __attribute__((swift_name("init(auth:listUri:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreGraphDeleteListRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth listUri:(NSString *)listUri __attribute__((swift_name("doCopy(auth:listUri:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property (readonly) NSString *listUri __attribute__((swift_name("listUri")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphEditListResponse")))
@interface KbskyCoreGraphEditListResponse : KbskyCoreRepoPutRecordResponse
- (instancetype)initWithDummy:(KbskyKotlinUnit *)dummy __attribute__((swift_name("init(dummy:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithSeen0:(int32_t)seen0 uri:(NSString * _Nullable)uri cid:(NSString * _Nullable)cid serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:uri:cid:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreGraphEditListResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreGraphEditListResponse *)doCopyDummy:(KbskyKotlinUnit *)dummy __attribute__((swift_name("doCopy(dummy:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KbskyKotlinUnit *dummy __attribute__((swift_name("dummy")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphEditListRequest")))
@interface KbskyCoreGraphEditListRequest : KbskyCoreAuthRequest
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth listUri:(NSString *)listUri name:(NSString *)name description:(NSString * _Nullable)description descriptionFacets:(NSArray<KbskyCoreRichtextFacet *> * _Nullable)descriptionFacets avatar:(KbskyCoreBlob * _Nullable)avatar labels:(KbskyCoreLabelDefsSelfLabels * _Nullable)labels __attribute__((swift_name("init(auth:listUri:name:description:descriptionFacets:avatar:labels:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreGraphEditListRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth listUri:(NSString *)listUri name:(NSString *)name description:(NSString * _Nullable)description descriptionFacets:(NSArray<KbskyCoreRichtextFacet *> * _Nullable)descriptionFacets avatar:(KbskyCoreBlob * _Nullable)avatar labels:(KbskyCoreLabelDefsSelfLabels * _Nullable)labels __attribute__((swift_name("doCopy(auth:listUri:name:description:descriptionFacets:avatar:labels:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property (readonly) KbskyCoreBlob * _Nullable avatar __attribute__((swift_name("avatar")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) NSArray<KbskyCoreRichtextFacet *> * _Nullable descriptionFacets __attribute__((swift_name("descriptionFacets")));
@property KbskyCoreLabelDefsSelfLabels * _Nullable labels __attribute__((swift_name("labels")));
@property (readonly) NSString *listUri __attribute__((swift_name("listUri")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphFollowResponse")))
@interface KbskyCoreGraphFollowResponse : KbskyCoreRepoCreateRecordResponse
- (instancetype)initWithDummy:(KbskyKotlinUnit *)dummy __attribute__((swift_name("init(dummy:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithSeen0:(int32_t)seen0 uri:(NSString * _Nullable)uri cid:(NSString * _Nullable)cid serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:uri:cid:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreGraphFollowResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreGraphFollowResponse *)doCopyDummy:(KbskyKotlinUnit *)dummy __attribute__((swift_name("doCopy(dummy:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KbskyKotlinUnit *dummy __attribute__((swift_name("dummy")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphFollowRequest")))
@interface KbskyCoreGraphFollowRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest, KbskyCoreRecordRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth subject:(NSString * _Nullable)subject createdAt:(NSString * _Nullable)createdAt __attribute__((swift_name("init(auth:subject:createdAt:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreGraphFollowRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth subject:(NSString * _Nullable)subject createdAt:(NSString * _Nullable)createdAt __attribute__((swift_name("doCopy(auth:subject:createdAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (KbskyCoreGraphFollow *)toFollow __attribute__((swift_name("toFollow()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property NSString * _Nullable subject __attribute__((swift_name("subject")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphGetBlocksResponse")))
@interface KbskyCoreGraphGetBlocksResponse : KbskyBase
- (instancetype)initWithCursor:(NSString * _Nullable)cursor blocks:(NSArray<KbskyCoreActorDefsProfileView *> *)blocks __attribute__((swift_name("init(cursor:blocks:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreGraphGetBlocksResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreGraphGetBlocksResponse *)doCopyCursor:(NSString * _Nullable)cursor blocks:(NSArray<KbskyCoreActorDefsProfileView *> *)blocks __attribute__((swift_name("doCopy(cursor:blocks:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSArray<KbskyCoreActorDefsProfileView *> *blocks __attribute__((swift_name("blocks")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphGetBlocksRequest")))
@interface KbskyCoreGraphGetBlocksRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth limit:(KbskyInt * _Nullable)limit cursor:(NSString * _Nullable)cursor __attribute__((swift_name("init(auth:limit:cursor:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreGraphGetBlocksRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth limit:(KbskyInt * _Nullable)limit cursor:(NSString * _Nullable)cursor __attribute__((swift_name("doCopy(auth:limit:cursor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property KbskyInt * _Nullable limit __attribute__((swift_name("limit")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphGetFollowersResponse")))
@interface KbskyCoreGraphGetFollowersResponse : KbskyBase
- (instancetype)initWithCursor:(NSString * _Nullable)cursor subject:(KbskyCoreActorDefsProfileView *)subject followers:(NSArray<KbskyCoreActorDefsProfileView *> *)followers __attribute__((swift_name("init(cursor:subject:followers:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreGraphGetFollowersResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreGraphGetFollowersResponse *)doCopyCursor:(NSString * _Nullable)cursor subject:(KbskyCoreActorDefsProfileView *)subject followers:(NSArray<KbskyCoreActorDefsProfileView *> *)followers __attribute__((swift_name("doCopy(cursor:subject:followers:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property NSArray<KbskyCoreActorDefsProfileView *> *followers __attribute__((swift_name("followers")));
@property KbskyCoreActorDefsProfileView *subject __attribute__((swift_name("subject")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphGetFollowersRequest")))
@interface KbskyCoreGraphGetFollowersRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth actor:(NSString * _Nullable)actor limit:(KbskyInt * _Nullable)limit cursor:(NSString * _Nullable)cursor __attribute__((swift_name("init(auth:actor:limit:cursor:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreGraphGetFollowersRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth actor:(NSString * _Nullable)actor limit:(KbskyInt * _Nullable)limit cursor:(NSString * _Nullable)cursor __attribute__((swift_name("doCopy(auth:actor:limit:cursor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable actor __attribute__((swift_name("actor")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property KbskyInt * _Nullable limit __attribute__((swift_name("limit")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphGetFollowsResponse")))
@interface KbskyCoreGraphGetFollowsResponse : KbskyBase
- (instancetype)initWithCursor:(NSString * _Nullable)cursor subject:(KbskyCoreActorDefsProfileView *)subject follows:(NSArray<KbskyCoreActorDefsProfileView *> *)follows __attribute__((swift_name("init(cursor:subject:follows:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreGraphGetFollowsResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreGraphGetFollowsResponse *)doCopyCursor:(NSString * _Nullable)cursor subject:(KbskyCoreActorDefsProfileView *)subject follows:(NSArray<KbskyCoreActorDefsProfileView *> *)follows __attribute__((swift_name("doCopy(cursor:subject:follows:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property NSArray<KbskyCoreActorDefsProfileView *> *follows __attribute__((swift_name("follows")));
@property KbskyCoreActorDefsProfileView *subject __attribute__((swift_name("subject")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphGetFollowsRequest")))
@interface KbskyCoreGraphGetFollowsRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth actor:(NSString * _Nullable)actor limit:(KbskyInt * _Nullable)limit cursor:(NSString * _Nullable)cursor __attribute__((swift_name("init(auth:actor:limit:cursor:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreGraphGetFollowsRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth actor:(NSString * _Nullable)actor limit:(KbskyInt * _Nullable)limit cursor:(NSString * _Nullable)cursor __attribute__((swift_name("doCopy(auth:actor:limit:cursor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable actor __attribute__((swift_name("actor")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property KbskyInt * _Nullable limit __attribute__((swift_name("limit")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphGetKnownFollowersResponse")))
@interface KbskyCoreGraphGetKnownFollowersResponse : KbskyBase
- (instancetype)initWithCursor:(NSString * _Nullable)cursor subject:(KbskyCoreActorDefsProfileView *)subject followers:(NSArray<KbskyCoreActorDefsProfileView *> *)followers __attribute__((swift_name("init(cursor:subject:followers:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreGraphGetKnownFollowersResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreGraphGetKnownFollowersResponse *)doCopyCursor:(NSString * _Nullable)cursor subject:(KbskyCoreActorDefsProfileView *)subject followers:(NSArray<KbskyCoreActorDefsProfileView *> *)followers __attribute__((swift_name("doCopy(cursor:subject:followers:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property NSArray<KbskyCoreActorDefsProfileView *> *followers __attribute__((swift_name("followers")));
@property KbskyCoreActorDefsProfileView *subject __attribute__((swift_name("subject")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphGetKnownFollowersRequest")))
@interface KbskyCoreGraphGetKnownFollowersRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth actor:(NSString * _Nullable)actor limit:(KbskyInt * _Nullable)limit cursor:(NSString * _Nullable)cursor __attribute__((swift_name("init(auth:actor:limit:cursor:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreGraphGetKnownFollowersRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth actor:(NSString * _Nullable)actor limit:(KbskyInt * _Nullable)limit cursor:(NSString * _Nullable)cursor __attribute__((swift_name("doCopy(auth:actor:limit:cursor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable actor __attribute__((swift_name("actor")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property KbskyInt * _Nullable limit __attribute__((swift_name("limit")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphGetListResponse")))
@interface KbskyCoreGraphGetListResponse : KbskyBase
- (instancetype)initWithCursor:(NSString * _Nullable)cursor list:(KbskyCoreGraphDefsListView *)list items:(NSArray<KbskyCoreGraphDefsListItemView *> *)items __attribute__((swift_name("init(cursor:list:items:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreGraphGetListResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreGraphGetListResponse *)doCopyCursor:(NSString * _Nullable)cursor list:(KbskyCoreGraphDefsListView *)list items:(NSArray<KbskyCoreGraphDefsListItemView *> *)items __attribute__((swift_name("doCopy(cursor:list:items:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property NSArray<KbskyCoreGraphDefsListItemView *> *items __attribute__((swift_name("items")));
@property KbskyCoreGraphDefsListView *list __attribute__((swift_name("list")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphGetListRequest")))
@interface KbskyCoreGraphGetListRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth list:(NSString * _Nullable)list limit:(KbskyInt * _Nullable)limit cursor:(NSString * _Nullable)cursor __attribute__((swift_name("init(auth:list:limit:cursor:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreGraphGetListRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth list:(NSString * _Nullable)list limit:(KbskyInt * _Nullable)limit cursor:(NSString * _Nullable)cursor __attribute__((swift_name("doCopy(auth:list:limit:cursor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property KbskyInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString * _Nullable list __attribute__((swift_name("list")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphGetListsResponse")))
@interface KbskyCoreGraphGetListsResponse : KbskyBase
- (instancetype)initWithCursor:(NSString * _Nullable)cursor lists:(NSArray<KbskyCoreGraphDefsListView *> *)lists __attribute__((swift_name("init(cursor:lists:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreGraphGetListsResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreGraphGetListsResponse *)doCopyCursor:(NSString * _Nullable)cursor lists:(NSArray<KbskyCoreGraphDefsListView *> *)lists __attribute__((swift_name("doCopy(cursor:lists:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property NSArray<KbskyCoreGraphDefsListView *> *lists __attribute__((swift_name("lists")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphGetListsRequest")))
@interface KbskyCoreGraphGetListsRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth actor:(NSString * _Nullable)actor limit:(KbskyInt * _Nullable)limit cursor:(NSString * _Nullable)cursor __attribute__((swift_name("init(auth:actor:limit:cursor:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreGraphGetListsRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth actor:(NSString * _Nullable)actor limit:(KbskyInt * _Nullable)limit cursor:(NSString * _Nullable)cursor __attribute__((swift_name("doCopy(auth:actor:limit:cursor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable actor __attribute__((swift_name("actor")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property KbskyInt * _Nullable limit __attribute__((swift_name("limit")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphGetMutesResponse")))
@interface KbskyCoreGraphGetMutesResponse : KbskyBase
- (instancetype)initWithCursor:(NSString * _Nullable)cursor mutes:(NSArray<KbskyCoreActorDefsProfileView *> *)mutes __attribute__((swift_name("init(cursor:mutes:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreGraphGetMutesResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreGraphGetMutesResponse *)doCopyCursor:(NSString * _Nullable)cursor mutes:(NSArray<KbskyCoreActorDefsProfileView *> *)mutes __attribute__((swift_name("doCopy(cursor:mutes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property NSArray<KbskyCoreActorDefsProfileView *> *mutes __attribute__((swift_name("mutes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphGetMutesRequest")))
@interface KbskyCoreGraphGetMutesRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth limit:(KbskyInt * _Nullable)limit cursor:(NSString * _Nullable)cursor __attribute__((swift_name("init(auth:limit:cursor:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreGraphGetMutesRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth limit:(KbskyInt * _Nullable)limit cursor:(NSString * _Nullable)cursor __attribute__((swift_name("doCopy(auth:limit:cursor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property KbskyInt * _Nullable limit __attribute__((swift_name("limit")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphGetStarterPackResponse")))
@interface KbskyCoreGraphGetStarterPackResponse : KbskyBase
- (instancetype)initWithStarterPack:(KbskyCoreGraphDefsStarterPackView *)starterPack __attribute__((swift_name("init(starterPack:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreGraphGetStarterPackResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreGraphGetStarterPackResponse *)doCopyStarterPack:(KbskyCoreGraphDefsStarterPackView *)starterPack __attribute__((swift_name("doCopy(starterPack:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KbskyCoreGraphDefsStarterPackView *starterPack __attribute__((swift_name("starterPack")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphGetStarterPackRequest")))
@interface KbskyCoreGraphGetStarterPackRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth starterPack:(NSString * _Nullable)starterPack __attribute__((swift_name("init(auth:starterPack:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreGraphGetStarterPackRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth starterPack:(NSString * _Nullable)starterPack __attribute__((swift_name("doCopy(auth:starterPack:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSString * _Nullable starterPack __attribute__((swift_name("starterPack")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphGetStarterPacksResponse")))
@interface KbskyCoreGraphGetStarterPacksResponse : KbskyBase
- (instancetype)initWithStarterPacks:(NSArray<KbskyCoreGraphDefsStarterPackViewBasic *> *)starterPacks __attribute__((swift_name("init(starterPacks:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreGraphGetStarterPacksResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreGraphGetStarterPacksResponse *)doCopyStarterPacks:(NSArray<KbskyCoreGraphDefsStarterPackViewBasic *> *)starterPacks __attribute__((swift_name("doCopy(starterPacks:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSArray<KbskyCoreGraphDefsStarterPackViewBasic *> *starterPacks __attribute__((swift_name("starterPacks")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphGetStarterPacksRequest")))
@interface KbskyCoreGraphGetStarterPacksRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth uris:(NSArray<NSString *> * _Nullable)uris __attribute__((swift_name("init(auth:uris:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreGraphGetStarterPacksRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth uris:(NSArray<NSString *> * _Nullable)uris __attribute__((swift_name("doCopy(auth:uris:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSArray<NSString *> * _Nullable uris __attribute__((swift_name("uris")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphMuteActorRequest")))
@interface KbskyCoreGraphMuteActorRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth actor:(NSString * _Nullable)actor __attribute__((swift_name("init(auth:actor:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreGraphMuteActorRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth actor:(NSString * _Nullable)actor __attribute__((swift_name("doCopy(auth:actor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable actor __attribute__((swift_name("actor")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphRemoveUserFromListRequest")))
@interface KbskyCoreGraphRemoveUserFromListRequest : KbskyCoreAuthRequest <KbskyCoreRKeyRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth uri:(NSString * _Nullable)uri rkey:(NSString * _Nullable)rkey __attribute__((swift_name("init(auth:uri:rkey:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreGraphRemoveUserFromListRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth uri:(NSString * _Nullable)uri rkey:(NSString * _Nullable)rkey __attribute__((swift_name("doCopy(auth:uri:rkey:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property (getter=rkey_) NSString * _Nullable rkey __attribute__((swift_name("rkey")));
@property NSString * _Nullable uri __attribute__((swift_name("uri")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphUnmuteActorRequest")))
@interface KbskyCoreGraphUnmuteActorRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth actor:(NSString * _Nullable)actor __attribute__((swift_name("init(auth:actor:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreGraphUnmuteActorRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth actor:(NSString * _Nullable)actor __attribute__((swift_name("doCopy(auth:actor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable actor __attribute__((swift_name("actor")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLabelerGetServicesResponse")))
@interface KbskyCoreLabelerGetServicesResponse : KbskyBase
- (instancetype)initWithViews:(NSArray<KbskyCoreLabelerViewUnion *> *)views __attribute__((swift_name("init(views:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreLabelerGetServicesResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreLabelerGetServicesResponse *)doCopyViews:(NSArray<KbskyCoreLabelerViewUnion *> *)views __attribute__((swift_name("doCopy(views:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSArray<KbskyCoreLabelerViewUnion *> *views __attribute__((swift_name("views")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLabelerGetServicesRequest")))
@interface KbskyCoreLabelerGetServicesRequest : KbskyCoreAuthRequest
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth dids:(NSArray<NSString *> *)dids detailed:(KbskyBoolean * _Nullable)detailed __attribute__((swift_name("init(auth:dids:detailed:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreLabelerGetServicesRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth dids:(NSArray<NSString *> *)dids detailed:(KbskyBoolean * _Nullable)detailed __attribute__((swift_name("doCopy(auth:dids:detailed:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property KbskyBoolean * _Nullable detailed __attribute__((swift_name("detailed")));
@property NSArray<NSString *> *dids __attribute__((swift_name("dids")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotificationGetUnreadCountResponse")))
@interface KbskyCoreNotificationGetUnreadCountResponse : KbskyBase
- (instancetype)initWithCount:(int32_t)count __attribute__((swift_name("init(count:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreNotificationGetUnreadCountResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreNotificationGetUnreadCountResponse *)doCopyCount:(int32_t)count __attribute__((swift_name("doCopy(count:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property int32_t count __attribute__((swift_name("count")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotificationGetUnreadCountRequest")))
@interface KbskyCoreNotificationGetUnreadCountRequest : KbskyCoreAuthRequest
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer));
- (KbskyCoreNotificationGetUnreadCountRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("doCopy(auth:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotificationListNotificationsResponse")))
@interface KbskyCoreNotificationListNotificationsResponse : KbskyBase
- (instancetype)initWithCursor:(NSString * _Nullable)cursor notifications:(NSArray<KbskyCoreNotificationListNotificationsNotification *> *)notifications __attribute__((swift_name("init(cursor:notifications:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreNotificationListNotificationsResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreNotificationListNotificationsResponse *)doCopyCursor:(NSString * _Nullable)cursor notifications:(NSArray<KbskyCoreNotificationListNotificationsNotification *> *)notifications __attribute__((swift_name("doCopy(cursor:notifications:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property NSArray<KbskyCoreNotificationListNotificationsNotification *> *notifications __attribute__((swift_name("notifications")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotificationListNotificationsRequest")))
@interface KbskyCoreNotificationListNotificationsRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth limit:(KbskyInt * _Nullable)limit cursor:(NSString * _Nullable)cursor __attribute__((swift_name("init(auth:limit:cursor:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreNotificationListNotificationsRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth limit:(KbskyInt * _Nullable)limit cursor:(NSString * _Nullable)cursor __attribute__((swift_name("doCopy(auth:limit:cursor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property KbskyInt * _Nullable limit __attribute__((swift_name("limit")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotificationUpdateSeenRequest")))
@interface KbskyCoreNotificationUpdateSeenRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth seenAt:(NSString * _Nullable)seenAt __attribute__((swift_name("init(auth:seenAt:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreNotificationUpdateSeenRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth seenAt:(NSString * _Nullable)seenAt __attribute__((swift_name("doCopy(auth:seenAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)seenAt __attribute__((swift_name("seenAt()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property (getter=seenAt_) NSString * _Nullable seenAt __attribute__((swift_name("seenAt")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUnspeccedGetPopularResponse")))
@interface KbskyCoreUnspeccedGetPopularResponse : KbskyBase
- (instancetype)initWithCursor:(NSString * _Nullable)cursor feed:(NSArray<KbskyCoreFeedDefsFeedViewPost *> *)feed __attribute__((swift_name("init(cursor:feed:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreUnspeccedGetPopularResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreUnspeccedGetPopularResponse *)doCopyCursor:(NSString * _Nullable)cursor feed:(NSArray<KbskyCoreFeedDefsFeedViewPost *> *)feed __attribute__((swift_name("doCopy(cursor:feed:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property NSArray<KbskyCoreFeedDefsFeedViewPost *> *feed __attribute__((swift_name("feed")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUnspeccedGetPopularRequest")))
@interface KbskyCoreUnspeccedGetPopularRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth includeNsfw:(KbskyBoolean * _Nullable)includeNsfw limit:(KbskyInt * _Nullable)limit cursor:(NSString * _Nullable)cursor __attribute__((swift_name("init(auth:includeNsfw:limit:cursor:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreUnspeccedGetPopularRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth includeNsfw:(KbskyBoolean * _Nullable)includeNsfw limit:(KbskyInt * _Nullable)limit cursor:(NSString * _Nullable)cursor __attribute__((swift_name("doCopy(auth:includeNsfw:limit:cursor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property KbskyBoolean * _Nullable includeNsfw __attribute__((swift_name("includeNsfw")));
@property KbskyInt * _Nullable limit __attribute__((swift_name("limit")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreVideoGetJobStatusResponse")))
@interface KbskyCoreVideoGetJobStatusResponse : KbskyBase
- (instancetype)initWithJobStatus:(KbskyCoreJobStatus *)jobStatus __attribute__((swift_name("init(jobStatus:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreVideoGetJobStatusResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreVideoGetJobStatusResponse *)doCopyJobStatus:(KbskyCoreJobStatus *)jobStatus __attribute__((swift_name("doCopy(jobStatus:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KbskyCoreJobStatus *jobStatus __attribute__((swift_name("jobStatus")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreVideoGetJobStatusRequest")))
@interface KbskyCoreVideoGetJobStatusRequest : KbskyCoreAuthRequest <KbskyCoreMapRequest>
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth jobId:(NSString *)jobId __attribute__((swift_name("init(auth:jobId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreVideoGetJobStatusRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth jobId:(NSString *)jobId __attribute__((swift_name("doCopy(auth:jobId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property (readonly) NSString *jobId __attribute__((swift_name("jobId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreVideoGetUploadLimitsResponse")))
@interface KbskyCoreVideoGetUploadLimitsResponse : KbskyBase
- (instancetype)initWithCanUpload:(BOOL)canUpload remainingDailyVideos:(KbskyInt * _Nullable)remainingDailyVideos remainingDailyBytes:(KbskyLong * _Nullable)remainingDailyBytes message:(NSString * _Nullable)message error:(NSString * _Nullable)error __attribute__((swift_name("init(canUpload:remainingDailyVideos:remainingDailyBytes:message:error:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreVideoGetUploadLimitsResponseCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreVideoGetUploadLimitsResponse *)doCopyCanUpload:(BOOL)canUpload remainingDailyVideos:(KbskyInt * _Nullable)remainingDailyVideos remainingDailyBytes:(KbskyLong * _Nullable)remainingDailyBytes message:(NSString * _Nullable)message error:(NSString * _Nullable)error __attribute__((swift_name("doCopy(canUpload:remainingDailyVideos:remainingDailyBytes:message:error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL canUpload __attribute__((swift_name("canUpload")));
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) KbskyLong * _Nullable remainingDailyBytes __attribute__((swift_name("remainingDailyBytes")));
@property (readonly) KbskyInt * _Nullable remainingDailyVideos __attribute__((swift_name("remainingDailyVideos")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreVideoGetUploadLimitsRequest")))
@interface KbskyCoreVideoGetUploadLimitsRequest : KbskyCoreAuthRequest
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer));
- (KbskyCoreVideoGetUploadLimitsRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("doCopy(auth:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreJobStatus")))
@interface KbskyCoreJobStatus : KbskyBase
- (instancetype)initWithJobId:(NSString *)jobId did:(NSString *)did state:(NSString *)state progress:(KbskyInt * _Nullable)progress blob:(KbskyCoreBlob * _Nullable)blob error:(NSString * _Nullable)error message:(NSString * _Nullable)message __attribute__((swift_name("init(jobId:did:state:progress:blob:error:message:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreJobStatusCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreJobStatus *)doCopyJobId:(NSString *)jobId did:(NSString *)did state:(NSString *)state progress:(KbskyInt * _Nullable)progress blob:(KbskyCoreBlob * _Nullable)blob error:(NSString * _Nullable)error message:(NSString * _Nullable)message __attribute__((swift_name("doCopy(jobId:did:state:progress:blob:error:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KbskyCoreBlob * _Nullable blob __attribute__((swift_name("blob")));
@property (readonly) NSString *did __attribute__((swift_name("did")));
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));
@property (readonly) NSString *jobId __attribute__((swift_name("jobId")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) KbskyInt * _Nullable progress __attribute__((swift_name("progress")));
@property (readonly) NSString *state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreVideoUploadVideoRequest")))
@interface KbskyCoreVideoUploadVideoRequest : KbskyCoreAuthRequest
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth bytes:(KbskyKotlinByteArray *)bytes name:(NSString *)name contentType:(NSString *)contentType __attribute__((swift_name("init(auth:bytes:name:contentType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAuth:(id<KbskyCoreAuthProvider>)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KbskyCoreVideoUploadVideoRequest *)doCopyAuth:(id<KbskyCoreAuthProvider>)auth bytes:(KbskyKotlinByteArray *)bytes name:(NSString *)name contentType:(NSString *)contentType __attribute__((swift_name("doCopy(auth:bytes:name:contentType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyCoreAuthProvider> auth __attribute__((swift_name("auth")));
@property KbskyKotlinByteArray *bytes __attribute__((swift_name("bytes")));
@property NSString *contentType __attribute__((swift_name("contentType")));
@property NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDidDocUnion.Companion")))
@interface KbskyCoreDidDocUnionCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreDidDocUnionCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDIDDetailsVerificationMethod")))
@interface KbskyCoreDIDDetailsVerificationMethod : KbskyBase
- (instancetype)initWithId:(NSString * _Nullable)id type:(NSString * _Nullable)type controller:(NSString * _Nullable)controller publicKeyMultibase:(NSString * _Nullable)publicKeyMultibase __attribute__((swift_name("init(id:type:controller:publicKeyMultibase:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreDIDDetailsVerificationMethodCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreDIDDetailsVerificationMethod *)doCopyId:(NSString * _Nullable)id type:(NSString * _Nullable)type controller:(NSString * _Nullable)controller publicKeyMultibase:(NSString * _Nullable)publicKeyMultibase __attribute__((swift_name("doCopy(id:type:controller:publicKeyMultibase:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable controller __attribute__((swift_name("controller")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property NSString * _Nullable publicKeyMultibase __attribute__((swift_name("publicKeyMultibase")));
@property NSString * _Nullable type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDIDDetailsService")))
@interface KbskyCoreDIDDetailsService : KbskyBase
- (instancetype)initWithId:(NSString * _Nullable)id type:(NSString * _Nullable)type serviceEndpoint:(NSString * _Nullable)serviceEndpoint __attribute__((swift_name("init(id:type:serviceEndpoint:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreDIDDetailsServiceCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreDIDDetailsService *)doCopyId:(NSString * _Nullable)id type:(NSString * _Nullable)type serviceEndpoint:(NSString * _Nullable)serviceEndpoint __attribute__((swift_name("doCopy(id:type:serviceEndpoint:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property NSString * _Nullable serviceEndpoint __attribute__((swift_name("serviceEndpoint")));
@property NSString * _Nullable type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDIDDetails.Companion")))
@interface KbskyCoreDIDDetailsCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreDIDDetailsCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDIDLogService")))
@interface KbskyCoreDIDLogService : KbskyBase
- (instancetype)initWithAtprotoPDS:(KbskyCoreDIDLogPDS * _Nullable)atprotoPDS __attribute__((swift_name("init(atprotoPDS:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreDIDLogServiceCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreDIDLogService *)doCopyAtprotoPDS:(KbskyCoreDIDLogPDS * _Nullable)atprotoPDS __attribute__((swift_name("doCopy(atprotoPDS:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="atproto_pds")
*/
@property KbskyCoreDIDLogPDS * _Nullable atprotoPDS __attribute__((swift_name("atprotoPDS")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDIDLogVerificationMethods")))
@interface KbskyCoreDIDLogVerificationMethods : KbskyBase
- (instancetype)initWithAtproto:(NSString * _Nullable)atproto __attribute__((swift_name("init(atproto:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreDIDLogVerificationMethodsCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreDIDLogVerificationMethods *)doCopyAtproto:(NSString * _Nullable)atproto __attribute__((swift_name("doCopy(atproto:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable atproto __attribute__((swift_name("atproto")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDIDLog.Companion")))
@interface KbskyCoreDIDLogCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreDIDLogCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StreamSyncStreamClient")))
@interface KbskyStreamSyncStreamClient : KbskyBase
- (instancetype)initWithAtproto:(id<KbskyCoreATProtocol>)atproto uri:(NSString *)uri filter:(NSArray<NSString *> *)filter __attribute__((swift_name("init(atproto:uri:filter:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (KbskyStreamSyncStreamClient *)closedCallbackCallback:(id<KbskyStreamClosedCallback>)callback __attribute__((swift_name("closedCallback(callback:)")));
- (KbskyStreamSyncStreamClient *)errorCallbackCallback:(id<KbskyStreamErrorCallback>)callback __attribute__((swift_name("errorCallback(callback:)")));
- (KbskyStreamSyncStreamClient *)eventCallbackCallback:(id<KbskyStreamSyncEventCallback>)callback __attribute__((swift_name("eventCallback(callback:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)openWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("open(completionHandler:)")));
- (KbskyStreamSyncStreamClient *)openedCallbackCallback:(id<KbskyStreamOpenedCallback>)callback __attribute__((swift_name("openedCallback(callback:)")));
@property (readonly) id<KbskyCoreATProtocol> atproto __attribute__((swift_name("atproto")));
@property KbskyKhttpclientWebsocketRequest *client __attribute__((swift_name("client")));
@property id<KbskyStreamSyncEventCallback> _Nullable eventCallback __attribute__((swift_name("eventCallback")));
@property (readonly) NSArray<NSString *> *filter __attribute__((swift_name("filter")));
@property BOOL isOpen __attribute__((swift_name("isOpen")));
@property (readonly) NSString *uri __attribute__((swift_name("uri")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StreamSyncSubscribeReposRequest")))
@interface KbskyStreamSyncSubscribeReposRequest : KbskyBase <KbskyCoreMapRequest>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property NSArray<NSString *> *filter __attribute__((swift_name("filter")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreIdentityResolveHandleResponse.Companion")))
@interface KbskyCoreIdentityResolveHandleResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreIdentityResolveHandleResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRepoCreateRecordResponse.Companion")))
@interface KbskyCoreRepoCreateRecordResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreRepoCreateRecordResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("CoreAuthProvider")))
@protocol KbskyCoreAuthProvider
@required
- (BOOL)afterRequestHookMethod:(NSString *)method request:(KbskyKhttpclientHttpRequest *)request response:(KbskyKhttpclientHttpResponse *)response __attribute__((swift_name("afterRequestHook(method:request:response:)")));
- (void)beforeRequestHookMethod:(NSString *)method request:(KbskyKhttpclientHttpRequest *)request __attribute__((swift_name("beforeRequestHook(method:request:)")));
@property NSArray<NSString *> *acceptLabelers __attribute__((swift_name("acceptLabelers")));
@property (readonly) NSString *did __attribute__((swift_name("did")));
@property (readonly) NSString *pdsDid __attribute__((swift_name("pdsDid")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=work/socialhub/kbsky/util/json/RecordPolymorphicSerializer))
*/
__attribute__((swift_name("CoreRecordUnion")))
@interface KbskyCoreRecordUnion : KbskyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KbskyCoreRecordUnionCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) KbskyCoreActorProfile * _Nullable asActorProfile __attribute__((swift_name("asActorProfile")));
@property (readonly) KbskyCoreFeedLike * _Nullable asFeedLike __attribute__((swift_name("asFeedLike")));
@property (readonly) KbskyCoreFeedPost * _Nullable asFeedPost __attribute__((swift_name("asFeedPost")));
@property (readonly) KbskyCoreFeedRepost * _Nullable asFeedRepost __attribute__((swift_name("asFeedRepost")));
@property (readonly) KbskyCoreGraphBlock * _Nullable asGraphBlock __attribute__((swift_name("asGraphBlock")));
@property (readonly) KbskyCoreGraphFollow * _Nullable asGraphFollow __attribute__((swift_name("asGraphFollow")));
@property (readonly) KbskyCoreGraphList * _Nullable asGraphList __attribute__((swift_name("asGraphList")));
@property (readonly) KbskyCoreGraphListItem * _Nullable asGraphListItem __attribute__((swift_name("asGraphListItem")));
@property (readonly) KbskyCoreGraphStarterPack * _Nullable asGraphStarterPack __attribute__((swift_name("asGraphStarterPack")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRepoDescribeRepoResponse.Companion")))
@interface KbskyCoreRepoDescribeRepoResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreRepoDescribeRepoResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRepoGetRecordResponse.Companion")))
@interface KbskyCoreRepoGetRecordResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreRepoGetRecordResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRepoListRecordsRecord")))
@interface KbskyCoreRepoListRecordsRecord : KbskyBase
- (instancetype)initWithUri:(NSString * _Nullable)uri cid:(NSString * _Nullable)cid value:(KbskyCoreRecordUnion * _Nullable)value __attribute__((swift_name("init(uri:cid:value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreRepoListRecordsRecordCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreRepoListRecordsRecord *)doCopyUri:(NSString * _Nullable)uri cid:(NSString * _Nullable)cid value:(KbskyCoreRecordUnion * _Nullable)value __attribute__((swift_name("doCopy(uri:cid:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable cid __attribute__((swift_name("cid")));
@property NSString * _Nullable uri __attribute__((swift_name("uri")));
@property KbskyCoreRecordUnion * _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRepoListRecordsResponse.Companion")))
@interface KbskyCoreRepoListRecordsResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreRepoListRecordsResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRepoPutRecordResponse.Companion")))
@interface KbskyCoreRepoPutRecordResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreRepoPutRecordResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlob")))
@interface KbskyCoreBlob : KbskyBase
- (instancetype)initWithType:(NSString *)type ref:(KbskyCoreBlobRef * _Nullable)ref mimeType:(NSString * _Nullable)mimeType size:(KbskyInt * _Nullable)size __attribute__((swift_name("init(type:ref:mimeType:size:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreBlobCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreBlob *)doCopyType:(NSString *)type ref:(KbskyCoreBlobRef * _Nullable)ref mimeType:(NSString * _Nullable)mimeType size:(KbskyInt * _Nullable)size __attribute__((swift_name("doCopy(type:ref:mimeType:size:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable mimeType __attribute__((swift_name("mimeType")));
@property KbskyCoreBlobRef * _Nullable ref __attribute__((swift_name("ref")));
@property KbskyInt * _Nullable size __attribute__((swift_name("size")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRepoUploadBlobResponse.Companion")))
@interface KbskyCoreRepoUploadBlobResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreRepoUploadBlobResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface KbskyKotlinByteArray : KbskyBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(KbskyByte *(^)(KbskyInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (KbskyKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreServerCreateSessionResponse.Companion")))
@interface KbskyCoreServerCreateSessionResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreServerCreateSessionResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreServerGetServiceAuthResponse.Companion")))
@interface KbskyCoreServerGetServiceAuthResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreServerGetServiceAuthResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreServerGetSessionResponse.Companion")))
@interface KbskyCoreServerGetSessionResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreServerGetSessionResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreServerRefreshSessionResponse.Companion")))
@interface KbskyCoreServerRefreshSessionResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreServerRefreshSessionResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=work/socialhub/kbsky/util/json/ActorDefsPreferencesPolymorphicSerializer))
*/
__attribute__((swift_name("CoreActorDefsPreferencesUnion")))
@interface KbskyCoreActorDefsPreferencesUnion : KbskyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KbskyCoreActorDefsPreferencesUnionCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) KbskyCoreActorDefsAdultContentPref * _Nullable asAdultContentPref __attribute__((swift_name("asAdultContentPref")));
@property (readonly) KbskyCoreActorDefsContentLabelPref * _Nullable asContentLabelPref __attribute__((swift_name("asContentLabelPref")));
@property (readonly) KbskyCoreActorDefsFeedViewPref * _Nullable asFeedViewPref __attribute__((swift_name("asFeedViewPref")));
@property (readonly) KbskyCoreActorDefsLabelersPref * _Nullable asLabelersPref __attribute__((swift_name("asLabelersPref")));
@property (readonly) KbskyCoreActorDefsPersonalDetailsPref * _Nullable asPersonalDetailsPref __attribute__((swift_name("asPersonalDetailsPref")));
@property (readonly) KbskyCoreActorDefsSavedFeedsPref * _Nullable asSavedFeedsPref __attribute__((swift_name("asSavedFeedsPref")));
@property (readonly) KbskyCoreActorDefsSavedFeedsPrefV2 * _Nullable asSavedFeedsPrefV2 __attribute__((swift_name("asSavedFeedsPrefV2")));
@property (readonly) KbskyCoreActorDefsThreadViewPref * _Nullable asThreadViewPref __attribute__((swift_name("asThreadViewPref")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorGetPreferencesResponse.Companion")))
@interface KbskyCoreActorGetPreferencesResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreActorGetPreferencesResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorDefsProfileAssociated")))
@interface KbskyCoreActorDefsProfileAssociated : KbskyBase
- (instancetype)initWithLists:(KbskyInt * _Nullable)lists feedgens:(KbskyInt * _Nullable)feedgens labeler:(KbskyBoolean * _Nullable)labeler chat:(KbskyCoreActorDefsProfileAssociatedChat * _Nullable)chat __attribute__((swift_name("init(lists:feedgens:labeler:chat:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreActorDefsProfileAssociatedCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreActorDefsProfileAssociated *)doCopyLists:(KbskyInt * _Nullable)lists feedgens:(KbskyInt * _Nullable)feedgens labeler:(KbskyBoolean * _Nullable)labeler chat:(KbskyCoreActorDefsProfileAssociatedChat * _Nullable)chat __attribute__((swift_name("doCopy(lists:feedgens:labeler:chat:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KbskyCoreActorDefsProfileAssociatedChat * _Nullable chat __attribute__((swift_name("chat")));
@property KbskyInt * _Nullable feedgens __attribute__((swift_name("feedgens")));
@property KbskyBoolean * _Nullable labeler __attribute__((swift_name("labeler")));
@property KbskyInt * _Nullable lists __attribute__((swift_name("lists")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorDefsViewerState")))
@interface KbskyCoreActorDefsViewerState : KbskyBase
- (instancetype)initWithMuted:(KbskyBoolean * _Nullable)muted blockedBy:(KbskyBoolean * _Nullable)blockedBy blocking:(NSString * _Nullable)blocking following:(NSString * _Nullable)following followedBy:(NSString * _Nullable)followedBy knownFollowers:(KbskyCoreActorDefsKnownFollowers * _Nullable)knownFollowers __attribute__((swift_name("init(muted:blockedBy:blocking:following:followedBy:knownFollowers:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreActorDefsViewerStateCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreActorDefsViewerState *)doCopyMuted:(KbskyBoolean * _Nullable)muted blockedBy:(KbskyBoolean * _Nullable)blockedBy blocking:(NSString * _Nullable)blocking following:(NSString * _Nullable)following followedBy:(NSString * _Nullable)followedBy knownFollowers:(KbskyCoreActorDefsKnownFollowers * _Nullable)knownFollowers __attribute__((swift_name("doCopy(muted:blockedBy:blocking:following:followedBy:knownFollowers:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KbskyBoolean * _Nullable blockedBy __attribute__((swift_name("blockedBy")));
@property NSString * _Nullable blocking __attribute__((swift_name("blocking")));
@property NSString * _Nullable followedBy __attribute__((swift_name("followedBy")));
@property NSString * _Nullable following __attribute__((swift_name("following")));
@property (readonly) KbskyCoreActorDefsKnownFollowers * _Nullable knownFollowers __attribute__((swift_name("knownFollowers")));
@property KbskyBoolean * _Nullable muted __attribute__((swift_name("muted")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLabelDefsLabel")))
@interface KbskyCoreLabelDefsLabel : KbskyBase
- (instancetype)initWithSrc:(NSString * _Nullable)src uri:(NSString * _Nullable)uri cid:(NSString * _Nullable)cid val:(NSString * _Nullable)val neg:(KbskyBoolean * _Nullable)neg cts:(NSString * _Nullable)cts __attribute__((swift_name("init(src:uri:cid:val:neg:cts:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreLabelDefsLabelCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreLabelDefsLabel *)doCopySrc:(NSString * _Nullable)src uri:(NSString * _Nullable)uri cid:(NSString * _Nullable)cid val:(NSString * _Nullable)val neg:(KbskyBoolean * _Nullable)neg cts:(NSString * _Nullable)cts __attribute__((swift_name("doCopy(src:uri:cid:val:neg:cts:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable cid __attribute__((swift_name("cid")));
@property NSString * _Nullable cts __attribute__((swift_name("cts")));
@property KbskyBoolean * _Nullable neg __attribute__((swift_name("neg")));
@property NSString * _Nullable src __attribute__((swift_name("src")));
@property NSString * _Nullable uri __attribute__((swift_name("uri")));
@property NSString * _Nullable val __attribute__((swift_name("val")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRepoStrongRef")))
@interface KbskyCoreRepoStrongRef : KbskyBase
- (instancetype)initWithUri:(NSString *)uri cid:(NSString *)cid __attribute__((swift_name("init(uri:cid:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreRepoStrongRefCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreRepoStrongRef *)doCopyUri:(NSString *)uri cid:(NSString *)cid __attribute__((swift_name("doCopy(uri:cid:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *cid __attribute__((swift_name("cid")));
@property NSString *uri __attribute__((swift_name("uri")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorDefsVerificationState")))
@interface KbskyCoreActorDefsVerificationState : KbskyBase
- (instancetype)initWithVerifications:(NSArray<KbskyCoreActorDefsVerificationView *> *)verifications verifiedStatus:(NSString *)verifiedStatus trustedVerifierStatus:(NSString *)trustedVerifierStatus __attribute__((swift_name("init(verifications:verifiedStatus:trustedVerifierStatus:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreActorDefsVerificationStateCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreActorDefsVerificationState *)doCopyVerifications:(NSArray<KbskyCoreActorDefsVerificationView *> *)verifications verifiedStatus:(NSString *)verifiedStatus trustedVerifierStatus:(NSString *)trustedVerifierStatus __attribute__((swift_name("doCopy(verifications:verifiedStatus:trustedVerifierStatus:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *trustedVerifierStatus __attribute__((swift_name("trustedVerifierStatus")));
@property (readonly) NSArray<KbskyCoreActorDefsVerificationView *> *verifications __attribute__((swift_name("verifications")));
@property (readonly) NSString *verifiedStatus __attribute__((swift_name("verifiedStatus")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorDefsProfileViewDetailed.Companion")))
@interface KbskyCoreActorDefsProfileViewDetailedCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreActorDefsProfileViewDetailedCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorGetProfileResponse.Companion")))
@interface KbskyCoreActorGetProfileResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreActorGetProfileResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorGetProfilesResponse.Companion")))
@interface KbskyCoreActorGetProfilesResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreActorGetProfilesResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorDefsProfileView")))
@interface KbskyCoreActorDefsProfileView : KbskyBase
- (instancetype)initWithDid:(NSString *)did handle:(NSString *)handle displayName:(NSString * _Nullable)displayName description:(NSString * _Nullable)description avatar:(NSString * _Nullable)avatar associated:(KbskyCoreActorDefsProfileAssociated * _Nullable)associated indexedAt:(NSString * _Nullable)indexedAt createdAt:(NSString * _Nullable)createdAt viewer:(KbskyCoreActorDefsViewerState * _Nullable)viewer labels:(NSArray<KbskyCoreLabelDefsLabel *> * _Nullable)labels verification:(KbskyCoreActorDefsVerificationState * _Nullable)verification __attribute__((swift_name("init(did:handle:displayName:description:avatar:associated:indexedAt:createdAt:viewer:labels:verification:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreActorDefsProfileViewCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreActorDefsProfileView *)doCopyDid:(NSString *)did handle:(NSString *)handle displayName:(NSString * _Nullable)displayName description:(NSString * _Nullable)description avatar:(NSString * _Nullable)avatar associated:(KbskyCoreActorDefsProfileAssociated * _Nullable)associated indexedAt:(NSString * _Nullable)indexedAt createdAt:(NSString * _Nullable)createdAt viewer:(KbskyCoreActorDefsViewerState * _Nullable)viewer labels:(NSArray<KbskyCoreLabelDefsLabel *> * _Nullable)labels verification:(KbskyCoreActorDefsVerificationState * _Nullable)verification __attribute__((swift_name("doCopy(did:handle:displayName:description:avatar:associated:indexedAt:createdAt:viewer:labels:verification:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KbskyCoreActorDefsProfileAssociated * _Nullable associated __attribute__((swift_name("associated")));
@property NSString * _Nullable avatar __attribute__((swift_name("avatar")));
@property NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property (setter=setDescription:) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property NSString *did __attribute__((swift_name("did")));
@property NSString * _Nullable displayName __attribute__((swift_name("displayName")));
@property NSString *handle __attribute__((swift_name("handle")));
@property NSString * _Nullable indexedAt __attribute__((swift_name("indexedAt")));
@property NSArray<KbskyCoreLabelDefsLabel *> * _Nullable labels __attribute__((swift_name("labels")));
@property KbskyCoreActorDefsVerificationState * _Nullable verification __attribute__((swift_name("verification")));
@property KbskyCoreActorDefsViewerState * _Nullable viewer __attribute__((swift_name("viewer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorSearchActorsResponse.Companion")))
@interface KbskyCoreActorSearchActorsResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreActorSearchActorsResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorSearchActorsTypeaheadResponse.Companion")))
@interface KbskyCoreActorSearchActorsTypeaheadResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreActorSearchActorsTypeaheadResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorUpdateProfileResponse.Companion")))
@interface KbskyCoreActorUpdateProfileResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreActorUpdateProfileResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoAddReactionResponse.Companion")))
@interface KbskyCoreConvoAddReactionResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreConvoAddReactionResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoDefsMessageUnion.Companion")))
@interface KbskyCoreConvoDefsMessageUnionCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreConvoDefsMessageUnionCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoDefsMessageViewSender")))
@interface KbskyCoreConvoDefsMessageViewSender : KbskyBase
- (instancetype)initWithDid:(NSString *)did __attribute__((swift_name("init(did:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreConvoDefsMessageViewSenderCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreConvoDefsMessageViewSender *)doCopyDid:(NSString *)did __attribute__((swift_name("doCopy(did:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *did __attribute__((swift_name("did")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoDefsDeletedMessageView.Companion")))
@interface KbskyCoreConvoDefsDeletedMessageViewCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreConvoDefsDeletedMessageViewCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoDefsConvoView")))
@interface KbskyCoreConvoDefsConvoView : KbskyBase
- (instancetype)initWithId:(NSString *)id rev:(NSString *)rev members:(NSArray<KbskyCoreActorDefsProfileViewBasic *> *)members lastMessage:(KbskyCoreConvoDefsMessageUnion * _Nullable)lastMessage lastReaction:(KbskyCoreConvoDefsMessageAndReactionView * _Nullable)lastReaction muted:(BOOL)muted unreadCount:(int32_t)unreadCount __attribute__((swift_name("init(id:rev:members:lastMessage:lastReaction:muted:unreadCount:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreConvoDefsConvoViewCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreConvoDefsConvoView *)doCopyId:(NSString *)id rev:(NSString *)rev members:(NSArray<KbskyCoreActorDefsProfileViewBasic *> *)members lastMessage:(KbskyCoreConvoDefsMessageUnion * _Nullable)lastMessage lastReaction:(KbskyCoreConvoDefsMessageAndReactionView * _Nullable)lastReaction muted:(BOOL)muted unreadCount:(int32_t)unreadCount __attribute__((swift_name("doCopy(id:rev:members:lastMessage:lastReaction:muted:unreadCount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) KbskyCoreConvoDefsMessageUnion * _Nullable lastMessage __attribute__((swift_name("lastMessage")));
@property (readonly) KbskyCoreConvoDefsMessageAndReactionView * _Nullable lastReaction __attribute__((swift_name("lastReaction")));
@property (readonly) NSArray<KbskyCoreActorDefsProfileViewBasic *> *members __attribute__((swift_name("members")));
@property (readonly) BOOL muted __attribute__((swift_name("muted")));
@property (readonly) NSString *rev __attribute__((swift_name("rev")));
@property (readonly) int32_t unreadCount __attribute__((swift_name("unreadCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoGetConvoResponse.Companion")))
@interface KbskyCoreConvoGetConvoResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreConvoGetConvoResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoGetConvoForMembersResponse.Companion")))
@interface KbskyCoreConvoGetConvoForMembersResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreConvoGetConvoForMembersResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoGetListConvosResponse.Companion")))
@interface KbskyCoreConvoGetListConvosResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreConvoGetListConvosResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=work/socialhub/kbsky/util/json/ChatConvoDefsLogUnionSerializer))
*/
__attribute__((swift_name("CoreConvoDefsLogUnion")))
@interface KbskyCoreConvoDefsLogUnion : KbskyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KbskyCoreConvoDefsLogUnionCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) KbskyCoreConvoDefsLogAddReaction * _Nullable asAddReaction __attribute__((swift_name("asAddReaction")));
@property (readonly) KbskyCoreConvoDefsLogBeginConvo * _Nullable asBeginConvo __attribute__((swift_name("asBeginConvo")));
@property (readonly) KbskyCoreConvoDefsLogCreateMessage * _Nullable asCreateMessage __attribute__((swift_name("asCreateMessage")));
@property (readonly) KbskyCoreConvoDefsLogDeleteMessage * _Nullable asDeleteMessage __attribute__((swift_name("asDeleteMessage")));
@property (readonly) KbskyCoreConvoDefsLogLeaveConvo * _Nullable asLeaveConvo __attribute__((swift_name("asLeaveConvo")));
@property (readonly) KbskyCoreConvoDefsLogReadMessage * _Nullable asReadMessage __attribute__((swift_name("asReadMessage")));
@property (readonly) KbskyCoreConvoDefsLogRemoveReaction * _Nullable asRemoveReaction __attribute__((swift_name("asRemoveReaction")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoGetLogResponse.Companion")))
@interface KbskyCoreConvoGetLogResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreConvoGetLogResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoGetMessagesResponse.Companion")))
@interface KbskyCoreConvoGetMessagesResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreConvoGetMessagesResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoLeaveConvoResponse.Companion")))
@interface KbskyCoreConvoLeaveConvoResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreConvoLeaveConvoResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoMuteConvoResponse.Companion")))
@interface KbskyCoreConvoMuteConvoResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreConvoMuteConvoResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoRemoveReactionResponse.Companion")))
@interface KbskyCoreConvoRemoveReactionResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreConvoRemoveReactionResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRichtextFacet")))
@interface KbskyCoreRichtextFacet : KbskyBase
- (instancetype)initWithType:(NSString *)type index:(KbskyCoreRichtextFacetByteSlice * _Nullable)index features:(NSMutableArray<KbskyCoreRichtextFacetFeatureUnion *> * _Nullable)features __attribute__((swift_name("init(type:index:features:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreRichtextFacetCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreRichtextFacet *)doCopyType:(NSString *)type index:(KbskyCoreRichtextFacetByteSlice * _Nullable)index features:(NSMutableArray<KbskyCoreRichtextFacetFeatureUnion *> * _Nullable)features __attribute__((swift_name("doCopy(type:index:features:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSMutableArray<KbskyCoreRichtextFacetFeatureUnion *> * _Nullable features __attribute__((swift_name("features")));
@property KbskyCoreRichtextFacetByteSlice * _Nullable index __attribute__((swift_name("index")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoDefsReactionView")))
@interface KbskyCoreConvoDefsReactionView : KbskyBase
- (instancetype)initWithValue:(NSString *)value sender:(KbskyCoreConvoDefsReactionViewSender *)sender createdAt:(NSString *)createdAt __attribute__((swift_name("init(value:sender:createdAt:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreConvoDefsReactionViewCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreConvoDefsReactionView *)doCopyValue:(NSString *)value sender:(KbskyCoreConvoDefsReactionViewSender *)sender createdAt:(NSString *)createdAt __attribute__((swift_name("doCopy(value:sender:createdAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *createdAt __attribute__((swift_name("createdAt")));
@property (readonly) KbskyCoreConvoDefsReactionViewSender *sender __attribute__((swift_name("sender")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoDefsMessageView.Companion")))
@interface KbskyCoreConvoDefsMessageViewCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreConvoDefsMessageViewCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoDefsMessageInput")))
@interface KbskyCoreConvoDefsMessageInput : KbskyBase
- (instancetype)initWithText:(NSString *)text facets:(NSArray<KbskyCoreRichtextFacet *> * _Nullable)facets embed:(KbskyCoreEmbedUnion * _Nullable)embed __attribute__((swift_name("init(text:facets:embed:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreConvoDefsMessageInputCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreConvoDefsMessageInput *)doCopyText:(NSString *)text facets:(NSArray<KbskyCoreRichtextFacet *> * _Nullable)facets embed:(KbskyCoreEmbedUnion * _Nullable)embed __attribute__((swift_name("doCopy(text:facets:embed:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KbskyCoreEmbedUnion * _Nullable embed __attribute__((swift_name("embed")));
@property NSArray<KbskyCoreRichtextFacet *> * _Nullable facets __attribute__((swift_name("facets")));
@property NSString *text __attribute__((swift_name("text")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoUnmuteConvoResponse.Companion")))
@interface KbskyCoreConvoUnmuteConvoResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreConvoUnmuteConvoResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoUpdateReadResponse.Companion")))
@interface KbskyCoreConvoUpdateReadResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreConvoUpdateReadResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=work/socialhub/kbsky/util/json/EmbedRecordViewPolymorphicSerializer))
*/
__attribute__((swift_name("CoreEmbedRecordViewUnion")))
@interface KbskyCoreEmbedRecordViewUnion : KbskyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KbskyCoreEmbedRecordViewUnionCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) KbskyCoreEmbedRecordViewBlocked * _Nullable asBlocked __attribute__((swift_name("asBlocked")));
@property (readonly) KbskyCoreEmbedRecordViewDetached * _Nullable asDetached __attribute__((swift_name("asDetached")));
@property (readonly) KbskyCoreFeedDefsGeneratorView * _Nullable asGeneratorView __attribute__((swift_name("asGeneratorView")));
@property (readonly) KbskyCoreGraphDefsListView * _Nullable asListView __attribute__((swift_name("asListView")));
@property (readonly) KbskyCoreEmbedRecordViewNotFound * _Nullable asNotFound __attribute__((swift_name("asNotFound")));
@property (readonly) KbskyCoreEmbedRecordViewRecord * _Nullable asRecord __attribute__((swift_name("asRecord")));
@property (readonly) KbskyCoreGraphDefsStarterPackViewBasic * _Nullable asStarterPackView __attribute__((swift_name("asStarterPackView")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedDefsGeneratorView")))
@interface KbskyCoreFeedDefsGeneratorView : KbskyCoreEmbedRecordViewUnion
- (instancetype)initWithType:(NSString *)type uri:(NSString * _Nullable)uri cid:(NSString * _Nullable)cid did:(NSString * _Nullable)did creator:(KbskyCoreActorDefsProfileView * _Nullable)creator displayName:(NSString * _Nullable)displayName description:(NSString * _Nullable)description descriptionFacets:(NSArray<KbskyCoreRichtextFacet *> * _Nullable)descriptionFacets avatar:(NSString * _Nullable)avatar likeCount:(KbskyInt * _Nullable)likeCount viewer:(KbskyCoreFeedDefsGeneratorViewerState * _Nullable)viewer indexedAt:(NSString * _Nullable)indexedAt __attribute__((swift_name("init(type:uri:cid:did:creator:displayName:description:descriptionFacets:avatar:likeCount:viewer:indexedAt:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreFeedDefsGeneratorViewCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreFeedDefsGeneratorView *)doCopyType:(NSString *)type uri:(NSString * _Nullable)uri cid:(NSString * _Nullable)cid did:(NSString * _Nullable)did creator:(KbskyCoreActorDefsProfileView * _Nullable)creator displayName:(NSString * _Nullable)displayName description:(NSString * _Nullable)description descriptionFacets:(NSArray<KbskyCoreRichtextFacet *> * _Nullable)descriptionFacets avatar:(NSString * _Nullable)avatar likeCount:(KbskyInt * _Nullable)likeCount viewer:(KbskyCoreFeedDefsGeneratorViewerState * _Nullable)viewer indexedAt:(NSString * _Nullable)indexedAt __attribute__((swift_name("doCopy(type:uri:cid:did:creator:displayName:description:descriptionFacets:avatar:likeCount:viewer:indexedAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable avatar __attribute__((swift_name("avatar")));
@property NSString * _Nullable cid __attribute__((swift_name("cid")));
@property KbskyCoreActorDefsProfileView * _Nullable creator __attribute__((swift_name("creator")));
@property (setter=setDescription:) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property NSArray<KbskyCoreRichtextFacet *> * _Nullable descriptionFacets __attribute__((swift_name("descriptionFacets")));
@property NSString * _Nullable did __attribute__((swift_name("did")));
@property NSString * _Nullable displayName __attribute__((swift_name("displayName")));
@property NSString * _Nullable indexedAt __attribute__((swift_name("indexedAt")));
@property KbskyInt * _Nullable likeCount __attribute__((swift_name("likeCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@property NSString * _Nullable uri __attribute__((swift_name("uri")));
@property KbskyCoreFeedDefsGeneratorViewerState * _Nullable viewer __attribute__((swift_name("viewer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedGetActorFeedsResponse.Companion")))
@interface KbskyCoreFeedGetActorFeedsResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreFeedGetActorFeedsResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedDefsFeedViewPost")))
@interface KbskyCoreFeedDefsFeedViewPost : KbskyBase
- (instancetype)initWithPost:(KbskyCoreFeedDefsPostView *)post reply:(KbskyCoreFeedDefsReplyRef * _Nullable)reply reason:(KbskyCoreFeedDefsReasonUnion * _Nullable)reason __attribute__((swift_name("init(post:reply:reason:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreFeedDefsFeedViewPostCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreFeedDefsFeedViewPost *)doCopyPost:(KbskyCoreFeedDefsPostView *)post reply:(KbskyCoreFeedDefsReplyRef * _Nullable)reply reason:(KbskyCoreFeedDefsReasonUnion * _Nullable)reason __attribute__((swift_name("doCopy(post:reply:reason:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KbskyCoreFeedDefsPostView *post __attribute__((swift_name("post")));
@property KbskyCoreFeedDefsReasonUnion * _Nullable reason __attribute__((swift_name("reason")));
@property KbskyCoreFeedDefsReplyRef * _Nullable reply __attribute__((swift_name("reply")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedGetActorLikesResponse.Companion")))
@interface KbskyCoreFeedGetActorLikesResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreFeedGetActorLikesResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedGetAuthorFeedResponse.Companion")))
@interface KbskyCoreFeedGetAuthorFeedResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreFeedGetAuthorFeedResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol KbskyKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface KbskyKotlinEnum<E> : KbskyBase <KbskyKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedGetAuthorFeedRequest.Filter")))
@interface KbskyCoreFeedGetAuthorFeedRequestFilter : KbskyKotlinEnum<KbskyCoreFeedGetAuthorFeedRequestFilter *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KbskyCoreFeedGetAuthorFeedRequestFilter *postswithreplies __attribute__((swift_name("postswithreplies")));
@property (class, readonly) KbskyCoreFeedGetAuthorFeedRequestFilter *postsnoreplies __attribute__((swift_name("postsnoreplies")));
@property (class, readonly) KbskyCoreFeedGetAuthorFeedRequestFilter *postswithmedia __attribute__((swift_name("postswithmedia")));
@property (class, readonly) KbskyCoreFeedGetAuthorFeedRequestFilter *postswithvideo __attribute__((swift_name("postswithvideo")));
@property (class, readonly) KbskyCoreFeedGetAuthorFeedRequestFilter *postsandauthorthreads __attribute__((swift_name("postsandauthorthreads")));
+ (KbskyKotlinArray<KbskyCoreFeedGetAuthorFeedRequestFilter *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<KbskyCoreFeedGetAuthorFeedRequestFilter *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedGetFeedResponse.Companion")))
@interface KbskyCoreFeedGetFeedResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreFeedGetFeedResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedGetFeedGeneratorResponse.Companion")))
@interface KbskyCoreFeedGetFeedGeneratorResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreFeedGetFeedGeneratorResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedGetFeedGeneratorsResponse.Companion")))
@interface KbskyCoreFeedGetFeedGeneratorsResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreFeedGetFeedGeneratorsResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedGetLikesLike")))
@interface KbskyCoreFeedGetLikesLike : KbskyBase
- (instancetype)initWithIndexedAt:(NSString *)indexedAt createdAt:(NSString *)createdAt actor:(KbskyCoreActorDefsProfileView *)actor __attribute__((swift_name("init(indexedAt:createdAt:actor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreFeedGetLikesLikeCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreFeedGetLikesLike *)doCopyIndexedAt:(NSString *)indexedAt createdAt:(NSString *)createdAt actor:(KbskyCoreActorDefsProfileView *)actor __attribute__((swift_name("doCopy(indexedAt:createdAt:actor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KbskyCoreActorDefsProfileView *actor __attribute__((swift_name("actor")));
@property NSString *createdAt __attribute__((swift_name("createdAt")));
@property NSString *indexedAt __attribute__((swift_name("indexedAt")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedGetLikesResponse.Companion")))
@interface KbskyCoreFeedGetLikesResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreFeedGetLikesResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedGetListFeedResponse.Companion")))
@interface KbskyCoreFeedGetListFeedResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreFeedGetListFeedResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=work/socialhub/kbsky/util/json/FeedDefsThreadPolymorphicSerializer))
*/
__attribute__((swift_name("CoreFeedDefsThreadUnion")))
@interface KbskyCoreFeedDefsThreadUnion : KbskyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KbskyCoreFeedDefsThreadUnionCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) KbskyCoreFeedDefsNotFoundPost * _Nullable asNotFoundPost __attribute__((swift_name("asNotFoundPost")));
@property (readonly) KbskyCoreFeedDefsThreadViewPost * _Nullable asViewPost __attribute__((swift_name("asViewPost")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedGetPostThreadResponse.Companion")))
@interface KbskyCoreFeedGetPostThreadResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreFeedGetPostThreadResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedDefsPostView")))
@interface KbskyCoreFeedDefsPostView : KbskyBase
- (instancetype)initWithUri:(NSString * _Nullable)uri cid:(NSString * _Nullable)cid author:(KbskyCoreActorDefsProfileViewBasic_ * _Nullable)author record:(KbskyCoreRecordUnion * _Nullable)record embed:(KbskyCoreEmbedViewUnion * _Nullable)embed replyCount:(KbskyInt * _Nullable)replyCount repostCount:(KbskyInt * _Nullable)repostCount likeCount:(KbskyInt * _Nullable)likeCount quoteCount:(KbskyInt * _Nullable)quoteCount indexedAt:(NSString * _Nullable)indexedAt viewer:(KbskyCoreFeedDefsViewerState * _Nullable)viewer labels:(NSArray<KbskyCoreLabelDefsLabel *> * _Nullable)labels threadgate:(KbskyCoreFeedDefsThreadgateView * _Nullable)threadgate __attribute__((swift_name("init(uri:cid:author:record:embed:replyCount:repostCount:likeCount:quoteCount:indexedAt:viewer:labels:threadgate:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreFeedDefsPostViewCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreFeedDefsPostView *)doCopyUri:(NSString * _Nullable)uri cid:(NSString * _Nullable)cid author:(KbskyCoreActorDefsProfileViewBasic_ * _Nullable)author record:(KbskyCoreRecordUnion * _Nullable)record embed:(KbskyCoreEmbedViewUnion * _Nullable)embed replyCount:(KbskyInt * _Nullable)replyCount repostCount:(KbskyInt * _Nullable)repostCount likeCount:(KbskyInt * _Nullable)likeCount quoteCount:(KbskyInt * _Nullable)quoteCount indexedAt:(NSString * _Nullable)indexedAt viewer:(KbskyCoreFeedDefsViewerState * _Nullable)viewer labels:(NSArray<KbskyCoreLabelDefsLabel *> * _Nullable)labels threadgate:(KbskyCoreFeedDefsThreadgateView * _Nullable)threadgate __attribute__((swift_name("doCopy(uri:cid:author:record:embed:replyCount:repostCount:likeCount:quoteCount:indexedAt:viewer:labels:threadgate:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KbskyCoreActorDefsProfileViewBasic_ * _Nullable author __attribute__((swift_name("author")));
@property NSString * _Nullable cid __attribute__((swift_name("cid")));
@property KbskyCoreEmbedViewUnion * _Nullable embed __attribute__((swift_name("embed")));
@property NSString * _Nullable indexedAt __attribute__((swift_name("indexedAt")));
@property NSArray<KbskyCoreLabelDefsLabel *> * _Nullable labels __attribute__((swift_name("labels")));
@property KbskyInt * _Nullable likeCount __attribute__((swift_name("likeCount")));
@property KbskyInt * _Nullable quoteCount __attribute__((swift_name("quoteCount")));
@property KbskyCoreRecordUnion * _Nullable record __attribute__((swift_name("record")));
@property KbskyInt * _Nullable replyCount __attribute__((swift_name("replyCount")));
@property KbskyInt * _Nullable repostCount __attribute__((swift_name("repostCount")));
@property KbskyCoreFeedDefsThreadgateView * _Nullable threadgate __attribute__((swift_name("threadgate")));
@property NSString * _Nullable uri __attribute__((swift_name("uri")));
@property KbskyCoreFeedDefsViewerState * _Nullable viewer __attribute__((swift_name("viewer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedGetPostsResponse.Companion")))
@interface KbskyCoreFeedGetPostsResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreFeedGetPostsResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedGetQuotesResponse.Companion")))
@interface KbskyCoreFeedGetQuotesResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreFeedGetQuotesResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedGetRepostedByResponse.Companion")))
@interface KbskyCoreFeedGetRepostedByResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreFeedGetRepostedByResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedGetTimelineResponse.Companion")))
@interface KbskyCoreFeedGetTimelineResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreFeedGetTimelineResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedLikeResponse.Companion")))
@interface KbskyCoreFeedLikeResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreFeedLikeResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedLike")))
@interface KbskyCoreFeedLike : KbskyCoreRecordUnion
- (instancetype)initWithType:(NSString *)type subject:(KbskyCoreRepoStrongRef * _Nullable)subject createdAt:(NSString * _Nullable)createdAt __attribute__((swift_name("init(type:subject:createdAt:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreFeedLikeCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreFeedLike *)doCopyType:(NSString *)type subject:(KbskyCoreRepoStrongRef * _Nullable)subject createdAt:(NSString * _Nullable)createdAt __attribute__((swift_name("doCopy(type:subject:createdAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property KbskyCoreRepoStrongRef * _Nullable subject __attribute__((swift_name("subject")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedPostResponse.Companion")))
@interface KbskyCoreFeedPostResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreFeedPostResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLabelDefsSelfLabels")))
@interface KbskyCoreLabelDefsSelfLabels : KbskyBase
- (instancetype)initWithType:(NSString *)type values:(NSArray<KbskyCoreLabelDefsSelfLabel *> *)values __attribute__((swift_name("init(type:values:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreLabelDefsSelfLabelsCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreLabelDefsSelfLabels *)doCopyType:(NSString *)type values:(NSArray<KbskyCoreLabelDefsSelfLabel *> *)values __attribute__((swift_name("doCopy(type:values:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@property NSArray<KbskyCoreLabelDefsSelfLabel *> *values __attribute__((swift_name("values")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedPostReplyRef")))
@interface KbskyCoreFeedPostReplyRef : KbskyBase
- (instancetype)initWithRoot:(KbskyCoreRepoStrongRef * _Nullable)root parent:(KbskyCoreRepoStrongRef * _Nullable)parent __attribute__((swift_name("init(root:parent:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreFeedPostReplyRefCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreFeedPostReplyRef *)doCopyRoot:(KbskyCoreRepoStrongRef * _Nullable)root parent:(KbskyCoreRepoStrongRef * _Nullable)parent __attribute__((swift_name("doCopy(root:parent:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KbskyCoreRepoStrongRef * _Nullable parent __attribute__((swift_name("parent")));
@property KbskyCoreRepoStrongRef * _Nullable root __attribute__((swift_name("root")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=work/socialhub/kbsky/util/json/EmbedPolymorphicSerializer))
*/
__attribute__((swift_name("CoreEmbedUnion")))
@interface KbskyCoreEmbedUnion : KbskyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KbskyCoreEmbedUnionCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) KbskyCoreEmbedExternal * _Nullable asExternal __attribute__((swift_name("asExternal")));
@property (readonly) KbskyCoreEmbedImages * _Nullable asImages __attribute__((swift_name("asImages")));
@property (readonly) KbskyCoreEmbedRecord * _Nullable asRecord __attribute__((swift_name("asRecord")));
@property (readonly) KbskyCoreEmbedRecordWithMedia * _Nullable asRecordWithMedia __attribute__((swift_name("asRecordWithMedia")));
@property (readonly) KbskyCoreEmbedVideo * _Nullable asVideo __attribute__((swift_name("asVideo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedPost")))
@interface KbskyCoreFeedPost : KbskyCoreRecordUnion
- (instancetype)initWithType:(NSString *)type text:(NSString * _Nullable)text langs:(NSArray<NSString *> * _Nullable)langs labels:(KbskyCoreLabelDefsSelfLabels * _Nullable)labels facets:(NSArray<KbskyCoreRichtextFacet *> * _Nullable)facets reply:(KbskyCoreFeedPostReplyRef * _Nullable)reply embed:(KbskyCoreEmbedUnion * _Nullable)embed createdAt:(NSString * _Nullable)createdAt via:(NSString * _Nullable)via skyblurPostUri:(NSString * _Nullable)skyblurPostUri __attribute__((swift_name("init(type:text:langs:labels:facets:reply:embed:createdAt:via:skyblurPostUri:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreFeedPostCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreFeedPost *)doCopyType:(NSString *)type text:(NSString * _Nullable)text langs:(NSArray<NSString *> * _Nullable)langs labels:(KbskyCoreLabelDefsSelfLabels * _Nullable)labels facets:(NSArray<KbskyCoreRichtextFacet *> * _Nullable)facets reply:(KbskyCoreFeedPostReplyRef * _Nullable)reply embed:(KbskyCoreEmbedUnion * _Nullable)embed createdAt:(NSString * _Nullable)createdAt via:(NSString * _Nullable)via skyblurPostUri:(NSString * _Nullable)skyblurPostUri __attribute__((swift_name("doCopy(type:text:langs:labels:facets:reply:embed:createdAt:via:skyblurPostUri:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property KbskyCoreEmbedUnion * _Nullable embed __attribute__((swift_name("embed")));
@property NSArray<KbskyCoreRichtextFacet *> * _Nullable facets __attribute__((swift_name("facets")));
@property KbskyCoreLabelDefsSelfLabels * _Nullable labels __attribute__((swift_name("labels")));
@property NSArray<NSString *> * _Nullable langs __attribute__((swift_name("langs")));
@property KbskyCoreFeedPostReplyRef * _Nullable reply __attribute__((swift_name("reply")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="uk.skyblur.post.uri")
*/
@property NSString * _Nullable skyblurPostUri __attribute__((swift_name("skyblurPostUri")));
@property NSString * _Nullable text __attribute__((swift_name("text")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@property NSString * _Nullable via __attribute__((swift_name("via")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedPostgateResponse.Companion")))
@interface KbskyCoreFeedPostgateResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreFeedPostgateResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=work/socialhub/kbsky/util/json/PostgateEmbeddingRulesUnionPolymorphicSerializer))
*/
__attribute__((swift_name("CoreFeedPostgateEmbeddingRulesUnion")))
@interface KbskyCoreFeedPostgateEmbeddingRulesUnion : KbskyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KbskyCoreFeedPostgateEmbeddingRulesUnionCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) KbskyCoreFeedPostgateDisableRule * _Nullable asPostgateDisableRule __attribute__((swift_name("asPostgateDisableRule")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedPostgate")))
@interface KbskyCoreFeedPostgate : KbskyCoreRecordUnion
- (instancetype)initWithType:(NSString *)type createdAt:(NSString * _Nullable)createdAt post:(NSString * _Nullable)post detachedEmbeddingUris:(NSArray<NSString *> * _Nullable)detachedEmbeddingUris embeddingRules:(NSArray<KbskyCoreFeedPostgateEmbeddingRulesUnion *> * _Nullable)embeddingRules __attribute__((swift_name("init(type:createdAt:post:detachedEmbeddingUris:embeddingRules:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreFeedPostgateCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreFeedPostgate *)doCopyType:(NSString *)type createdAt:(NSString * _Nullable)createdAt post:(NSString * _Nullable)post detachedEmbeddingUris:(NSArray<NSString *> * _Nullable)detachedEmbeddingUris embeddingRules:(NSArray<KbskyCoreFeedPostgateEmbeddingRulesUnion *> * _Nullable)embeddingRules __attribute__((swift_name("doCopy(type:createdAt:post:detachedEmbeddingUris:embeddingRules:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property NSArray<NSString *> * _Nullable detachedEmbeddingUris __attribute__((swift_name("detachedEmbeddingUris")));
@property NSArray<KbskyCoreFeedPostgateEmbeddingRulesUnion *> * _Nullable embeddingRules __attribute__((swift_name("embeddingRules")));
@property NSString * _Nullable post __attribute__((swift_name("post")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedRepostResponse.Companion")))
@interface KbskyCoreFeedRepostResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreFeedRepostResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedRepost")))
@interface KbskyCoreFeedRepost : KbskyCoreRecordUnion
- (instancetype)initWithType:(NSString *)type subject:(KbskyCoreRepoStrongRef * _Nullable)subject createdAt:(NSString * _Nullable)createdAt __attribute__((swift_name("init(type:subject:createdAt:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreFeedRepostCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreFeedRepost *)doCopyType:(NSString *)type subject:(KbskyCoreRepoStrongRef * _Nullable)subject createdAt:(NSString * _Nullable)createdAt __attribute__((swift_name("doCopy(type:subject:createdAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property KbskyCoreRepoStrongRef * _Nullable subject __attribute__((swift_name("subject")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedSearchPostsResponse.Companion")))
@interface KbskyCoreFeedSearchPostsResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreFeedSearchPostsResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedThreadgateResponse.Companion")))
@interface KbskyCoreFeedThreadgateResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreFeedThreadgateResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=work/socialhub/kbsky/util/json/ThreadgateAllowUnionPolymorphicSerializer))
*/
__attribute__((swift_name("CoreFeedThreadgateAllowUnion")))
@interface KbskyCoreFeedThreadgateAllowUnion : KbskyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KbskyCoreFeedThreadgateAllowUnionCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) KbskyCoreFeedThreadgateFollowingRule * _Nullable asThreadgateFollowingRule __attribute__((swift_name("asThreadgateFollowingRule")));
@property (readonly) KbskyCoreFeedThreadgateListRule * _Nullable asThreadgateListRule __attribute__((swift_name("asThreadgateListRule")));
@property (readonly) KbskyCoreFeedThreadgateMentionRule * _Nullable asThreadgateMentionRule __attribute__((swift_name("asThreadgateMentionRule")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedThreadgate")))
@interface KbskyCoreFeedThreadgate : KbskyCoreRecordUnion
- (instancetype)initWithType:(NSString *)type createdAt:(NSString * _Nullable)createdAt post:(NSString * _Nullable)post allow:(NSArray<KbskyCoreFeedThreadgateAllowUnion *> * _Nullable)allow __attribute__((swift_name("init(type:createdAt:post:allow:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreFeedThreadgateCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreFeedThreadgate *)doCopyType:(NSString *)type createdAt:(NSString * _Nullable)createdAt post:(NSString * _Nullable)post allow:(NSArray<KbskyCoreFeedThreadgateAllowUnion *> * _Nullable)allow __attribute__((swift_name("doCopy(type:createdAt:post:allow:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSArray<KbskyCoreFeedThreadgateAllowUnion *> * _Nullable allow __attribute__((swift_name("allow")));
@property NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property NSString * _Nullable post __attribute__((swift_name("post")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphListItem")))
@interface KbskyCoreGraphListItem : KbskyCoreRecordUnion
- (instancetype)initWithType:(NSString *)type subject:(NSString * _Nullable)subject list:(NSString * _Nullable)list createdAt:(NSString * _Nullable)createdAt __attribute__((swift_name("init(type:subject:list:createdAt:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreGraphListItemCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreGraphListItem *)doCopyType:(NSString *)type subject:(NSString * _Nullable)subject list:(NSString * _Nullable)list createdAt:(NSString * _Nullable)createdAt __attribute__((swift_name("doCopy(type:subject:list:createdAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property NSString * _Nullable list __attribute__((swift_name("list")));
@property NSString * _Nullable subject __attribute__((swift_name("subject")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphBlock")))
@interface KbskyCoreGraphBlock : KbskyCoreRecordUnion
- (instancetype)initWithType:(NSString *)type subject:(NSString * _Nullable)subject createdAt:(NSString * _Nullable)createdAt __attribute__((swift_name("init(type:subject:createdAt:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreGraphBlockCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreGraphBlock *)doCopyType:(NSString *)type subject:(NSString * _Nullable)subject createdAt:(NSString * _Nullable)createdAt __attribute__((swift_name("doCopy(type:subject:createdAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property NSString * _Nullable subject __attribute__((swift_name("subject")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphList")))
@interface KbskyCoreGraphList : KbskyCoreRecordUnion
- (instancetype)initWithPurpose:(NSString * _Nullable)purpose name:(NSString * _Nullable)name description:(NSString * _Nullable)description descriptionFacets:(NSArray<KbskyCoreRichtextFacet *> * _Nullable)descriptionFacets avatar:(KbskyCoreBlob * _Nullable)avatar labels:(KbskyCoreLabelDefsSelfLabels * _Nullable)labels createdAt:(NSString * _Nullable)createdAt __attribute__((swift_name("init(purpose:name:description:descriptionFacets:avatar:labels:createdAt:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreGraphListCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreGraphList *)doCopyPurpose:(NSString * _Nullable)purpose name:(NSString * _Nullable)name description:(NSString * _Nullable)description descriptionFacets:(NSArray<KbskyCoreRichtextFacet *> * _Nullable)descriptionFacets avatar:(KbskyCoreBlob * _Nullable)avatar labels:(KbskyCoreLabelDefsSelfLabels * _Nullable)labels createdAt:(NSString * _Nullable)createdAt __attribute__((swift_name("doCopy(purpose:name:description:descriptionFacets:avatar:labels:createdAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KbskyCoreBlob * _Nullable avatar __attribute__((swift_name("avatar")));
@property (readonly) NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) NSArray<KbskyCoreRichtextFacet *> * _Nullable descriptionFacets __attribute__((swift_name("descriptionFacets")));
@property KbskyCoreLabelDefsSelfLabels * _Nullable labels __attribute__((swift_name("labels")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable purpose __attribute__((swift_name("purpose")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphEditListResponse.Companion")))
@interface KbskyCoreGraphEditListResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreGraphEditListResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphFollowResponse.Companion")))
@interface KbskyCoreGraphFollowResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreGraphFollowResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphFollow")))
@interface KbskyCoreGraphFollow : KbskyCoreRecordUnion
- (instancetype)initWithType:(NSString *)type subject:(NSString * _Nullable)subject createdAt:(NSString * _Nullable)createdAt __attribute__((swift_name("init(type:subject:createdAt:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreGraphFollowCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreGraphFollow *)doCopyType:(NSString *)type subject:(NSString * _Nullable)subject createdAt:(NSString * _Nullable)createdAt __attribute__((swift_name("doCopy(type:subject:createdAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property NSString * _Nullable subject __attribute__((swift_name("subject")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphGetBlocksResponse.Companion")))
@interface KbskyCoreGraphGetBlocksResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreGraphGetBlocksResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphGetFollowersResponse.Companion")))
@interface KbskyCoreGraphGetFollowersResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreGraphGetFollowersResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphGetFollowsResponse.Companion")))
@interface KbskyCoreGraphGetFollowsResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreGraphGetFollowsResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphGetKnownFollowersResponse.Companion")))
@interface KbskyCoreGraphGetKnownFollowersResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreGraphGetKnownFollowersResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphDefsListView")))
@interface KbskyCoreGraphDefsListView : KbskyCoreEmbedRecordViewUnion
- (instancetype)initWithType:(NSString *)type uri:(NSString * _Nullable)uri cid:(NSString * _Nullable)cid creator:(KbskyCoreActorDefsProfileView * _Nullable)creator name:(NSString * _Nullable)name purpose:(NSString * _Nullable)purpose description:(NSString * _Nullable)description descriptionFacets:(NSArray<KbskyCoreRichtextFacet *> *)descriptionFacets avatar:(NSString * _Nullable)avatar viewer:(KbskyCoreGraphDefsListViewerState * _Nullable)viewer indexedAt:(NSString * _Nullable)indexedAt __attribute__((swift_name("init(type:uri:cid:creator:name:purpose:description:descriptionFacets:avatar:viewer:indexedAt:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreGraphDefsListViewCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreGraphDefsListView *)doCopyType:(NSString *)type uri:(NSString * _Nullable)uri cid:(NSString * _Nullable)cid creator:(KbskyCoreActorDefsProfileView * _Nullable)creator name:(NSString * _Nullable)name purpose:(NSString * _Nullable)purpose description:(NSString * _Nullable)description descriptionFacets:(NSArray<KbskyCoreRichtextFacet *> *)descriptionFacets avatar:(NSString * _Nullable)avatar viewer:(KbskyCoreGraphDefsListViewerState * _Nullable)viewer indexedAt:(NSString * _Nullable)indexedAt __attribute__((swift_name("doCopy(type:uri:cid:creator:name:purpose:description:descriptionFacets:avatar:viewer:indexedAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable avatar __attribute__((swift_name("avatar")));
@property NSString * _Nullable cid __attribute__((swift_name("cid")));
@property KbskyCoreActorDefsProfileView * _Nullable creator __attribute__((swift_name("creator")));
@property (setter=setDescription:) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property NSArray<KbskyCoreRichtextFacet *> *descriptionFacets __attribute__((swift_name("descriptionFacets")));
@property NSString * _Nullable indexedAt __attribute__((swift_name("indexedAt")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property NSString * _Nullable purpose __attribute__((swift_name("purpose")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@property NSString * _Nullable uri __attribute__((swift_name("uri")));
@property KbskyCoreGraphDefsListViewerState * _Nullable viewer __attribute__((swift_name("viewer")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphDefsListItemView")))
@interface KbskyCoreGraphDefsListItemView : KbskyBase
- (instancetype)initWithType:(NSString *)type uri:(NSString * _Nullable)uri subject:(KbskyCoreActorDefsProfileView * _Nullable)subject __attribute__((swift_name("init(type:uri:subject:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreGraphDefsListItemViewCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreGraphDefsListItemView *)doCopyType:(NSString *)type uri:(NSString * _Nullable)uri subject:(KbskyCoreActorDefsProfileView * _Nullable)subject __attribute__((swift_name("doCopy(type:uri:subject:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KbskyCoreActorDefsProfileView * _Nullable subject __attribute__((swift_name("subject")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@property NSString * _Nullable uri __attribute__((swift_name("uri")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphGetListResponse.Companion")))
@interface KbskyCoreGraphGetListResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreGraphGetListResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphGetListsResponse.Companion")))
@interface KbskyCoreGraphGetListsResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreGraphGetListsResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphGetMutesResponse.Companion")))
@interface KbskyCoreGraphGetMutesResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreGraphGetMutesResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphDefsStarterPackView")))
@interface KbskyCoreGraphDefsStarterPackView : KbskyBase
- (instancetype)initWithUri:(NSString *)uri cid:(NSString *)cid record:(KbskyCoreRecordUnion *)record creator:(KbskyCoreActorDefsProfileViewBasic_ *)creator list:(KbskyCoreGraphDefsListViewBasic * _Nullable)list listItemsSample:(NSArray<KbskyCoreGraphDefsListItemView *> * _Nullable)listItemsSample feeds:(NSArray<KbskyCoreFeedDefsGeneratorView *> * _Nullable)feeds joinedWeekCount:(KbskyInt * _Nullable)joinedWeekCount joinedAllTimeCount:(KbskyInt * _Nullable)joinedAllTimeCount labels:(NSArray<KbskyCoreLabelDefsLabel *> * _Nullable)labels indexedAt:(NSString *)indexedAt __attribute__((swift_name("init(uri:cid:record:creator:list:listItemsSample:feeds:joinedWeekCount:joinedAllTimeCount:labels:indexedAt:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreGraphDefsStarterPackViewCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreGraphDefsStarterPackView *)doCopyUri:(NSString *)uri cid:(NSString *)cid record:(KbskyCoreRecordUnion *)record creator:(KbskyCoreActorDefsProfileViewBasic_ *)creator list:(KbskyCoreGraphDefsListViewBasic * _Nullable)list listItemsSample:(NSArray<KbskyCoreGraphDefsListItemView *> * _Nullable)listItemsSample feeds:(NSArray<KbskyCoreFeedDefsGeneratorView *> * _Nullable)feeds joinedWeekCount:(KbskyInt * _Nullable)joinedWeekCount joinedAllTimeCount:(KbskyInt * _Nullable)joinedAllTimeCount labels:(NSArray<KbskyCoreLabelDefsLabel *> * _Nullable)labels indexedAt:(NSString *)indexedAt __attribute__((swift_name("doCopy(uri:cid:record:creator:list:listItemsSample:feeds:joinedWeekCount:joinedAllTimeCount:labels:indexedAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *cid __attribute__((swift_name("cid")));
@property (readonly) KbskyCoreActorDefsProfileViewBasic_ *creator __attribute__((swift_name("creator")));
@property (readonly) NSArray<KbskyCoreFeedDefsGeneratorView *> * _Nullable feeds __attribute__((swift_name("feeds")));
@property (readonly) NSString *indexedAt __attribute__((swift_name("indexedAt")));
@property (readonly) KbskyInt * _Nullable joinedAllTimeCount __attribute__((swift_name("joinedAllTimeCount")));
@property (readonly) KbskyInt * _Nullable joinedWeekCount __attribute__((swift_name("joinedWeekCount")));
@property (readonly) NSArray<KbskyCoreLabelDefsLabel *> * _Nullable labels __attribute__((swift_name("labels")));
@property (readonly) KbskyCoreGraphDefsListViewBasic * _Nullable list __attribute__((swift_name("list")));
@property (readonly) NSArray<KbskyCoreGraphDefsListItemView *> * _Nullable listItemsSample __attribute__((swift_name("listItemsSample")));
@property (readonly) KbskyCoreRecordUnion *record __attribute__((swift_name("record")));
@property (readonly) NSString *uri __attribute__((swift_name("uri")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphGetStarterPackResponse.Companion")))
@interface KbskyCoreGraphGetStarterPackResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreGraphGetStarterPackResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphDefsStarterPackViewBasic")))
@interface KbskyCoreGraphDefsStarterPackViewBasic : KbskyCoreEmbedRecordViewUnion
- (instancetype)initWithType:(NSString *)type uri:(NSString *)uri cid:(NSString *)cid record:(KbskyCoreRecordUnion *)record creator:(KbskyCoreActorDefsProfileViewBasic_ *)creator listItemCount:(KbskyInt * _Nullable)listItemCount joinedWeekCount:(KbskyInt * _Nullable)joinedWeekCount joinedAllTimeCount:(KbskyInt * _Nullable)joinedAllTimeCount labels:(NSArray<KbskyCoreLabelDefsLabel *> * _Nullable)labels indexedAt:(NSString *)indexedAt __attribute__((swift_name("init(type:uri:cid:record:creator:listItemCount:joinedWeekCount:joinedAllTimeCount:labels:indexedAt:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreGraphDefsStarterPackViewBasicCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreGraphDefsStarterPackViewBasic *)doCopyType:(NSString *)type uri:(NSString *)uri cid:(NSString *)cid record:(KbskyCoreRecordUnion *)record creator:(KbskyCoreActorDefsProfileViewBasic_ *)creator listItemCount:(KbskyInt * _Nullable)listItemCount joinedWeekCount:(KbskyInt * _Nullable)joinedWeekCount joinedAllTimeCount:(KbskyInt * _Nullable)joinedAllTimeCount labels:(NSArray<KbskyCoreLabelDefsLabel *> * _Nullable)labels indexedAt:(NSString *)indexedAt __attribute__((swift_name("doCopy(type:uri:cid:record:creator:listItemCount:joinedWeekCount:joinedAllTimeCount:labels:indexedAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *cid __attribute__((swift_name("cid")));
@property (readonly) KbskyCoreActorDefsProfileViewBasic_ *creator __attribute__((swift_name("creator")));
@property (readonly) NSString *indexedAt __attribute__((swift_name("indexedAt")));
@property (readonly) KbskyInt * _Nullable joinedAllTimeCount __attribute__((swift_name("joinedAllTimeCount")));
@property (readonly) KbskyInt * _Nullable joinedWeekCount __attribute__((swift_name("joinedWeekCount")));
@property (readonly) NSArray<KbskyCoreLabelDefsLabel *> * _Nullable labels __attribute__((swift_name("labels")));
@property (readonly) KbskyInt * _Nullable listItemCount __attribute__((swift_name("listItemCount")));
@property (readonly) KbskyCoreRecordUnion *record __attribute__((swift_name("record")));
@property NSString *type __attribute__((swift_name("type")));
@property (readonly) NSString *uri __attribute__((swift_name("uri")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphGetStarterPacksResponse.Companion")))
@interface KbskyCoreGraphGetStarterPacksResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreGraphGetStarterPacksResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=work/socialhub/kbsky/util/json/LabelerViewPolymorphicSerializer))
*/
__attribute__((swift_name("CoreLabelerViewUnion")))
@interface KbskyCoreLabelerViewUnion : KbskyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KbskyCoreLabelerViewUnionCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) KbskyCoreLabelerView * _Nullable asLabelerView __attribute__((swift_name("asLabelerView")));
@property (readonly) KbskyCoreLabelerViewDetailed * _Nullable asLabelerViewDetailed __attribute__((swift_name("asLabelerViewDetailed")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLabelerGetServicesResponse.Companion")))
@interface KbskyCoreLabelerGetServicesResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreLabelerGetServicesResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotificationGetUnreadCountResponse.Companion")))
@interface KbskyCoreNotificationGetUnreadCountResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreNotificationGetUnreadCountResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotificationListNotificationsNotification")))
@interface KbskyCoreNotificationListNotificationsNotification : KbskyBase
- (instancetype)initWithUri:(NSString *)uri cid:(NSString *)cid author:(KbskyCoreActorDefsProfileView *)author reason:(NSString *)reason reasonSubject:(NSString * _Nullable)reasonSubject record:(KbskyCoreRecordUnion * _Nullable)record isRead:(BOOL)isRead indexedAt:(NSString *)indexedAt __attribute__((swift_name("init(uri:cid:author:reason:reasonSubject:record:isRead:indexedAt:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreNotificationListNotificationsNotificationCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreNotificationListNotificationsNotification *)doCopyUri:(NSString *)uri cid:(NSString *)cid author:(KbskyCoreActorDefsProfileView *)author reason:(NSString *)reason reasonSubject:(NSString * _Nullable)reasonSubject record:(KbskyCoreRecordUnion * _Nullable)record isRead:(BOOL)isRead indexedAt:(NSString *)indexedAt __attribute__((swift_name("doCopy(uri:cid:author:reason:reasonSubject:record:isRead:indexedAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KbskyCoreActorDefsProfileView *author __attribute__((swift_name("author")));
@property NSString *cid __attribute__((swift_name("cid")));
@property NSString *indexedAt __attribute__((swift_name("indexedAt")));
@property BOOL isRead __attribute__((swift_name("isRead")));
@property NSString *reason __attribute__((swift_name("reason")));
@property NSString * _Nullable reasonSubject __attribute__((swift_name("reasonSubject")));
@property KbskyCoreRecordUnion * _Nullable record __attribute__((swift_name("record")));
@property NSString *uri __attribute__((swift_name("uri")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotificationListNotificationsResponse.Companion")))
@interface KbskyCoreNotificationListNotificationsResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreNotificationListNotificationsResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUnspeccedGetPopularResponse.Companion")))
@interface KbskyCoreUnspeccedGetPopularResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreUnspeccedGetPopularResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreVideoGetJobStatusResponse.Companion")))
@interface KbskyCoreVideoGetJobStatusResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreVideoGetJobStatusResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreVideoGetUploadLimitsResponse.Companion")))
@interface KbskyCoreVideoGetUploadLimitsResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreVideoGetUploadLimitsResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreJobStatus.Companion")))
@interface KbskyCoreJobStatusCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreJobStatusCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol KbskyKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<KbskyKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<KbskyKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol KbskyKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<KbskyKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<KbskyKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol KbskyKotlinx_serialization_coreKSerializer <KbskyKotlinx_serialization_coreSerializationStrategy, KbskyKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDIDDetailsVerificationMethod.Companion")))
@interface KbskyCoreDIDDetailsVerificationMethodCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreDIDDetailsVerificationMethodCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDIDDetailsService.Companion")))
@interface KbskyCoreDIDDetailsServiceCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreDIDDetailsServiceCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDIDLogPDS")))
@interface KbskyCoreDIDLogPDS : KbskyBase
- (instancetype)initWithType:(NSString * _Nullable)type endpoint:(NSString * _Nullable)endpoint __attribute__((swift_name("init(type:endpoint:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreDIDLogPDSCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreDIDLogPDS *)doCopyType:(NSString * _Nullable)type endpoint:(NSString * _Nullable)endpoint __attribute__((swift_name("doCopy(type:endpoint:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable endpoint __attribute__((swift_name("endpoint")));
@property NSString * _Nullable type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDIDLogService.Companion")))
@interface KbskyCoreDIDLogServiceCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreDIDLogServiceCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDIDLogVerificationMethods.Companion")))
@interface KbskyCoreDIDLogVerificationMethodsCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreDIDLogVerificationMethodsCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface KbskyKotlinThrowable : KbskyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KbskyKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KbskyKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (KbskyKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KbskyKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface KbskyKotlinException : KbskyKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KbskyKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KbskyKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface KbskyKotlinRuntimeException : KbskyKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KbskyKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KbskyKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface KbskyKotlinIllegalStateException : KbskyKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KbskyKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KbskyKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface KbskyKotlinCancellationException : KbskyKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KbskyKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KbskyKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("StreamClosedCallback")))
@protocol KbskyStreamClosedCallback
@required
- (void)onClosed __attribute__((swift_name("onClosed()")));
@end

__attribute__((swift_name("StreamErrorCallback")))
@protocol KbskyStreamErrorCallback
@required
- (void)onErrorE:(KbskyKotlinException *)e __attribute__((swift_name("onError(e:)")));
@end

__attribute__((swift_name("StreamSyncEventCallback")))
@protocol KbskyStreamSyncEventCallback
@required
- (void)onEventCid:(NSString * _Nullable)cid uri:(NSString * _Nullable)uri record:(KbskyCoreRecordUnion *)record __attribute__((swift_name("onEvent(cid:uri:record:)")));
@end

__attribute__((swift_name("StreamOpenedCallback")))
@protocol KbskyStreamOpenedCallback
@required
- (void)onOpened __attribute__((swift_name("onOpened()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KhttpclientWebsocketRequest")))
@interface KbskyKhttpclientWebsocketRequest : KbskyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KbskyKhttpclientWebsocketRequest *)acceptAccept:(NSString *)accept __attribute__((swift_name("accept(accept:)")));
- (KbskyKhttpclientWebsocketRequest *)bytesListenerListener:(id<KbskyKotlinSuspendFunction1>)listener __attribute__((swift_name("bytesListener(listener:)")));
- (void)close __attribute__((swift_name("close()")));
- (KbskyKhttpclientWebsocketRequest *)headerKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("header(key:value:)")));
- (KbskyKhttpclientWebsocketRequest *)hostHost:(NSString *)host __attribute__((swift_name("host(host:)")));
- (KbskyKhttpclientWebsocketRequest *)onCloseListenerListener:(void (^)(KbskyKhttpclientWebsocketRequest *))listener __attribute__((swift_name("onCloseListener(listener:)")));
- (KbskyKhttpclientWebsocketRequest *)onOpenListenerListener:(void (^)(KbskyKhttpclientWebsocketRequest *))listener __attribute__((swift_name("onOpenListener(listener:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)openWithCompletionHandler:(void (^)(KbskyKhttpclientWebsocketRequest * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("open(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)openPostWithCompletionHandler:(void (^)(KbskyKhttpclientWebsocketRequest * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("openPost(completionHandler:)")));
- (KbskyKhttpclientWebsocketRequest *)pathPath:(NSString *)path __attribute__((swift_name("path(path:)")));
- (KbskyKhttpclientWebsocketRequest *)portPort:(KbskyInt * _Nullable)port __attribute__((swift_name("port(port:)")));
- (KbskyKhttpclientWebsocketRequest *)schemaSchema:(NSString *)schema __attribute__((swift_name("schema(schema:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendBinaryContent:(KbskyKotlinByteArray *)content completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("sendBinary(content:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendTextText:(NSString *)text completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("sendText(text:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)startMethod:(KbskyKtor_httpHttpMethod *)method completionHandler:(void (^)(KbskyKhttpclientWebsocketRequest * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("start(method:completionHandler:)")));
- (KbskyKhttpclientWebsocketRequest *)textListenerListener:(id<KbskyKotlinSuspendFunction1>)listener __attribute__((swift_name("textListener(listener:)")));
- (KbskyKhttpclientWebsocketRequest *)urlUrl:(NSString * _Nullable)url __attribute__((swift_name("url(url:)")));
- (KbskyKhttpclientWebsocketRequest *)userAgentUserAgent:(NSString *)userAgent __attribute__((swift_name("userAgent(userAgent:)")));
@property NSString * _Nullable accept __attribute__((swift_name("accept")));
@property id<KbskyKotlinSuspendFunction1> bytesListener __attribute__((swift_name("bytesListener")));
@property (readonly) KbskyMutableDictionary<NSString *, NSString *> *header __attribute__((swift_name("header")));
@property NSString * _Nullable host __attribute__((swift_name("host")));
@property void (^onCloseListener)(KbskyKhttpclientWebsocketRequest *) __attribute__((swift_name("onCloseListener")));
@property void (^onOpenListener)(KbskyKhttpclientWebsocketRequest *) __attribute__((swift_name("onOpenListener")));
@property NSString * _Nullable path __attribute__((swift_name("path")));
@property KbskyInt * _Nullable port __attribute__((swift_name("port")));
@property NSString *schema __attribute__((swift_name("schema")));
@property id<KbskyKotlinSuspendFunction1> textListener __attribute__((swift_name("textListener")));
@property NSString * _Nullable url __attribute__((swift_name("url")));
@property NSString * _Nullable userAgent __attribute__((swift_name("userAgent")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KhttpclientHttpRequest")))
@interface KbskyKhttpclientHttpRequest : KbskyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KbskyKhttpclientHttpRequest *)acceptAccept:(NSString *)accept __attribute__((swift_name("accept(accept:)")));
- (KbskyKhttpclientHttpRequest *)connectTimeoutMillisConnectTimeoutMillis:(int64_t)connectTimeoutMillis __attribute__((swift_name("connectTimeoutMillis(connectTimeoutMillis:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteWithCompletionHandler:(void (^)(KbskyKhttpclientHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("delete(completionHandler:)")));
- (KbskyKhttpclientHttpRequest *)fileKey:(NSString *)key fileName:(NSString *)fileName fileBody:(KbskyKotlinByteArray *)fileBody __attribute__((swift_name("file(key:fileName:fileBody:)")));
- (KbskyKhttpclientHttpRequest *)followRedirectFollowRedirect:(BOOL)followRedirect __attribute__((swift_name("followRedirect(followRedirect:)")));
- (KbskyKhttpclientHttpRequest *)forceApplicationFormUrlEncodedForceApplicationFormUrlEncoded:(BOOL)forceApplicationFormUrlEncoded __attribute__((swift_name("forceApplicationFormUrlEncoded(forceApplicationFormUrlEncoded:)")));
- (KbskyKhttpclientHttpRequest *)forceMultipartForceMultipart:(BOOL)forceMultipart __attribute__((swift_name("forceMultipart(forceMultipart:)"))) __attribute__((deprecated("migrate to forceMultipartFormData()")));
- (KbskyKhttpclientHttpRequest *)forceMultipartFormDataForceMultipartFormData:(BOOL)forceMultipartFormData __attribute__((swift_name("forceMultipartFormData(forceMultipartFormData:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getWithCompletionHandler:(void (^)(KbskyKhttpclientHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("get(completionHandler:)")));
- (KbskyKhttpclientHttpRequest *)headerKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("header(key:value:)")));
- (KbskyKhttpclientHttpRequest *)hostHost:(NSString *)host __attribute__((swift_name("host(host:)")));
- (KbskyKhttpclientHttpRequest *)jsonJson:(NSString *)json __attribute__((swift_name("json(json:)")));
- (KbskyKhttpclientHttpRequest *)paramKey:(NSString *)key value:(id)value __attribute__((swift_name("param(key:value:)")));
- (KbskyKhttpclientHttpRequest *)paramsParams:(NSDictionary<NSString *, id> *)params __attribute__((swift_name("params(params:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)patchWithCompletionHandler:(void (^)(KbskyKhttpclientHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("patch(completionHandler:)")));
- (KbskyKhttpclientHttpRequest *)pathPath:(NSString *)path __attribute__((swift_name("path(path:)")));
- (KbskyKhttpclientHttpRequest *)pathValueKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("pathValue(key:value:)")));
- (KbskyKhttpclientHttpRequest *)portPort:(KbskyInt * _Nullable)port __attribute__((swift_name("port(port:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postWithCompletionHandler:(void (^)(KbskyKhttpclientHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("post(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)putWithCompletionHandler:(void (^)(KbskyKhttpclientHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("put(completionHandler:)")));
- (KbskyKhttpclientHttpRequest *)queriesQueries:(NSDictionary<NSString *, id> *)queries __attribute__((swift_name("queries(queries:)")));
- (KbskyKhttpclientHttpRequest *)queryKey:(NSString *)key value:(id)value __attribute__((swift_name("query(key:value:)")));
- (KbskyKhttpclientHttpRequest *)requestTimeoutMillisRequestTimeoutMillis:(int64_t)requestTimeoutMillis __attribute__((swift_name("requestTimeoutMillis(requestTimeoutMillis:)")));
- (KbskyKhttpclientHttpRequest *)schemaSchema:(NSString *)schema __attribute__((swift_name("schema(schema:)")));
- (KbskyKhttpclientHttpRequest *)socketTimeoutMillisSocketTimeoutMillis:(int64_t)socketTimeoutMillis __attribute__((swift_name("socketTimeoutMillis(socketTimeoutMillis:)")));
- (KbskyKhttpclientHttpRequest *)urlUrl:(NSString *)url __attribute__((swift_name("url(url:)")));
- (KbskyKhttpclientHttpRequest *)userAgentUserAgent:(NSString *)userAgent __attribute__((swift_name("userAgent(userAgent:)")));
@property NSString * _Nullable accept __attribute__((swift_name("accept")));
@property KbskyLong * _Nullable connectTimeoutMillis __attribute__((swift_name("connectTimeoutMillis")));
@property BOOL followRedirect __attribute__((swift_name("followRedirect")));
@property BOOL forceApplicationFormUrlEncoded __attribute__((swift_name("forceApplicationFormUrlEncoded")));
@property BOOL forceMultipartFormData __attribute__((swift_name("forceMultipartFormData")));
@property (readonly) KbskyMutableDictionary<NSString *, NSString *> *header __attribute__((swift_name("header")));
@property NSString * _Nullable host __attribute__((swift_name("host")));
@property (readonly) NSMutableArray<KbskyKhttpclientHttpParameter *> *params __attribute__((swift_name("params")));
@property NSString * _Nullable path __attribute__((swift_name("path")));
@property KbskyInt * _Nullable port __attribute__((swift_name("port")));
@property KbskyLong * _Nullable requestTimeoutMillis __attribute__((swift_name("requestTimeoutMillis")));
@property NSString *schema __attribute__((swift_name("schema")));
@property KbskyLong * _Nullable socketTimeoutMillis __attribute__((swift_name("socketTimeoutMillis")));
@property NSString * _Nullable url __attribute__((swift_name("url")));
@property NSString * _Nullable userAgent __attribute__((swift_name("userAgent")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KhttpclientHttpResponse")))
@interface KbskyKhttpclientHttpResponse : KbskyBase
- (instancetype)initWithStatus:(int32_t)status headers:(NSDictionary<NSString *, NSArray<NSString *> *> *)headers body:(KbskyKotlinByteArray *)body __attribute__((swift_name("init(status:headers:body:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyKhttpclientHttpResponseCompanion *companion __attribute__((swift_name("companion")));
- (id _Nullable)typedBodyJson:(KbskyKotlinx_serialization_jsonJson *)json __attribute__((swift_name("typedBody(json:)")));
@property (readonly) KbskyKotlinByteArray *body __attribute__((swift_name("body")));
@property (readonly) NSDictionary<NSString *, NSArray<NSString *> *> *headers __attribute__((swift_name("headers")));
@property (readonly) int32_t status __attribute__((swift_name("status")));
@property (readonly) NSString *stringBody __attribute__((swift_name("stringBody")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRecordUnion.Companion")))
@interface KbskyCoreRecordUnionCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreRecordUnionCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorProfile")))
@interface KbskyCoreActorProfile : KbskyCoreRecordUnion
- (instancetype)initWithType:(NSString *)type displayName:(NSString * _Nullable)displayName description:(NSString * _Nullable)description avatar:(KbskyCoreBlob * _Nullable)avatar banner:(KbskyCoreBlob * _Nullable)banner pinnedPost:(KbskyCoreRepoStrongRef * _Nullable)pinnedPost __attribute__((swift_name("init(type:displayName:description:avatar:banner:pinnedPost:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreActorProfileCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreActorProfile *)doCopyType:(NSString *)type displayName:(NSString * _Nullable)displayName description:(NSString * _Nullable)description avatar:(KbskyCoreBlob * _Nullable)avatar banner:(KbskyCoreBlob * _Nullable)banner pinnedPost:(KbskyCoreRepoStrongRef * _Nullable)pinnedPost __attribute__((swift_name("doCopy(type:displayName:description:avatar:banner:pinnedPost:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KbskyCoreBlob * _Nullable avatar __attribute__((swift_name("avatar")));
@property KbskyCoreBlob * _Nullable banner __attribute__((swift_name("banner")));
@property (setter=setDescription:) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property NSString * _Nullable displayName __attribute__((swift_name("displayName")));
@property KbskyCoreRepoStrongRef * _Nullable pinnedPost __attribute__((swift_name("pinnedPost")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphStarterPack")))
@interface KbskyCoreGraphStarterPack : KbskyCoreRecordUnion
- (instancetype)initWithType:(NSString *)type name:(NSString * _Nullable)name description:(NSString * _Nullable)description descriptionFacets:(NSArray<KbskyCoreRichtextFacet *> * _Nullable)descriptionFacets list:(NSString * _Nullable)list feeds:(NSArray<KbskyCoreGraphStarterPackFeedItem *> * _Nullable)feeds createdAt:(NSString * _Nullable)createdAt __attribute__((swift_name("init(type:name:description:descriptionFacets:list:feeds:createdAt:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreGraphStarterPackCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreGraphStarterPack *)doCopyType:(NSString *)type name:(NSString * _Nullable)name description:(NSString * _Nullable)description descriptionFacets:(NSArray<KbskyCoreRichtextFacet *> * _Nullable)descriptionFacets list:(NSString * _Nullable)list feeds:(NSArray<KbskyCoreGraphStarterPackFeedItem *> * _Nullable)feeds createdAt:(NSString * _Nullable)createdAt __attribute__((swift_name("doCopy(type:name:description:descriptionFacets:list:feeds:createdAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property (setter=setDescription:) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property NSArray<KbskyCoreRichtextFacet *> * _Nullable descriptionFacets __attribute__((swift_name("descriptionFacets")));
@property NSArray<KbskyCoreGraphStarterPackFeedItem *> * _Nullable feeds __attribute__((swift_name("feeds")));
@property NSString * _Nullable list __attribute__((swift_name("list")));
@property NSString * _Nullable name __attribute__((swift_name("name")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRepoListRecordsRecord.Companion")))
@interface KbskyCoreRepoListRecordsRecordCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreRepoListRecordsRecordCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlobRef")))
@interface KbskyCoreBlobRef : KbskyBase
- (instancetype)initWithLink:(NSString * _Nullable)link __attribute__((swift_name("init(link:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreBlobRefCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreBlobRef *)doCopyLink:(NSString * _Nullable)link __attribute__((swift_name("doCopy(link:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$link")
*/
@property NSString * _Nullable link __attribute__((swift_name("link")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlob.Companion")))
@interface KbskyCoreBlobCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreBlobCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol KbskyKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface KbskyKotlinByteIterator : KbskyBase <KbskyKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KbskyByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorDefsPreferencesUnion.Companion")))
@interface KbskyCoreActorDefsPreferencesUnionCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreActorDefsPreferencesUnionCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorDefsAdultContentPref")))
@interface KbskyCoreActorDefsAdultContentPref : KbskyCoreActorDefsPreferencesUnion
- (instancetype)initWithType:(NSString *)type enabled:(BOOL)enabled __attribute__((swift_name("init(type:enabled:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreActorDefsAdultContentPrefCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreActorDefsAdultContentPref *)doCopyType:(NSString *)type enabled:(BOOL)enabled __attribute__((swift_name("doCopy(type:enabled:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property BOOL enabled __attribute__((swift_name("enabled")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorDefsContentLabelPref")))
@interface KbskyCoreActorDefsContentLabelPref : KbskyCoreActorDefsPreferencesUnion
- (instancetype)initWithType:(NSString *)type label:(NSString *)label visibility:(NSString *)visibility __attribute__((swift_name("init(type:label:visibility:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreActorDefsContentLabelPrefCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreActorDefsContentLabelPref *)doCopyType:(NSString *)type label:(NSString *)label visibility:(NSString *)visibility __attribute__((swift_name("doCopy(type:label:visibility:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *label __attribute__((swift_name("label")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@property NSString *visibility __attribute__((swift_name("visibility")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorDefsFeedViewPref")))
@interface KbskyCoreActorDefsFeedViewPref : KbskyCoreActorDefsPreferencesUnion
- (instancetype)initWithType:(NSString *)type feed:(NSString *)feed hideReplies:(KbskyBoolean * _Nullable)hideReplies hideRepliesByUnfollowed:(KbskyBoolean * _Nullable)hideRepliesByUnfollowed hideRepliesByLikeCount:(KbskyInt * _Nullable)hideRepliesByLikeCount hideReposts:(KbskyBoolean * _Nullable)hideReposts hideQuotePosts:(KbskyBoolean * _Nullable)hideQuotePosts __attribute__((swift_name("init(type:feed:hideReplies:hideRepliesByUnfollowed:hideRepliesByLikeCount:hideReposts:hideQuotePosts:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreActorDefsFeedViewPrefCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreActorDefsFeedViewPref *)doCopyType:(NSString *)type feed:(NSString *)feed hideReplies:(KbskyBoolean * _Nullable)hideReplies hideRepliesByUnfollowed:(KbskyBoolean * _Nullable)hideRepliesByUnfollowed hideRepliesByLikeCount:(KbskyInt * _Nullable)hideRepliesByLikeCount hideReposts:(KbskyBoolean * _Nullable)hideReposts hideQuotePosts:(KbskyBoolean * _Nullable)hideQuotePosts __attribute__((swift_name("doCopy(type:feed:hideReplies:hideRepliesByUnfollowed:hideRepliesByLikeCount:hideReposts:hideQuotePosts:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *feed __attribute__((swift_name("feed")));
@property KbskyBoolean * _Nullable hideQuotePosts __attribute__((swift_name("hideQuotePosts")));
@property KbskyBoolean * _Nullable hideReplies __attribute__((swift_name("hideReplies")));
@property KbskyInt * _Nullable hideRepliesByLikeCount __attribute__((swift_name("hideRepliesByLikeCount")));
@property KbskyBoolean * _Nullable hideRepliesByUnfollowed __attribute__((swift_name("hideRepliesByUnfollowed")));
@property KbskyBoolean * _Nullable hideReposts __attribute__((swift_name("hideReposts")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorDefsLabelersPref")))
@interface KbskyCoreActorDefsLabelersPref : KbskyCoreActorDefsPreferencesUnion
- (instancetype)initWithType:(NSString *)type labelers:(NSArray<KbskyCoreActorDefsLabelerPrefItem *> * _Nullable)labelers __attribute__((swift_name("init(type:labelers:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreActorDefsLabelersPrefCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreActorDefsLabelersPref *)doCopyType:(NSString *)type labelers:(NSArray<KbskyCoreActorDefsLabelerPrefItem *> * _Nullable)labelers __attribute__((swift_name("doCopy(type:labelers:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="labelers")
*/
@property NSArray<KbskyCoreActorDefsLabelerPrefItem *> * _Nullable labelers __attribute__((swift_name("labelers")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorDefsPersonalDetailsPref")))
@interface KbskyCoreActorDefsPersonalDetailsPref : KbskyCoreActorDefsPreferencesUnion
- (instancetype)initWithType:(NSString *)type birthDate:(NSString * _Nullable)birthDate __attribute__((swift_name("init(type:birthDate:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreActorDefsPersonalDetailsPrefCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreActorDefsPersonalDetailsPref *)doCopyType:(NSString *)type birthDate:(NSString * _Nullable)birthDate __attribute__((swift_name("doCopy(type:birthDate:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable birthDate __attribute__((swift_name("birthDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorDefsSavedFeedsPref")))
@interface KbskyCoreActorDefsSavedFeedsPref : KbskyCoreActorDefsPreferencesUnion
- (instancetype)initWithType:(NSString *)type pinned:(NSArray<NSString *> *)pinned saved:(NSArray<NSString *> *)saved __attribute__((swift_name("init(type:pinned:saved:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreActorDefsSavedFeedsPrefCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreActorDefsSavedFeedsPref *)doCopyType:(NSString *)type pinned:(NSArray<NSString *> *)pinned saved:(NSArray<NSString *> *)saved __attribute__((swift_name("doCopy(type:pinned:saved:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSArray<NSString *> *pinned __attribute__((swift_name("pinned")));
@property NSArray<NSString *> *saved __attribute__((swift_name("saved")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorDefsSavedFeedsPrefV2")))
@interface KbskyCoreActorDefsSavedFeedsPrefV2 : KbskyCoreActorDefsPreferencesUnion
- (instancetype)initWithType:(NSString *)type items:(NSArray<KbskyCoreActorDefsSavedFeed *> *)items __attribute__((swift_name("init(type:items:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreActorDefsSavedFeedsPrefV2Companion *companion __attribute__((swift_name("companion")));
- (KbskyCoreActorDefsSavedFeedsPrefV2 *)doCopyType:(NSString *)type items:(NSArray<KbskyCoreActorDefsSavedFeed *> *)items __attribute__((swift_name("doCopy(type:items:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSArray<KbskyCoreActorDefsSavedFeed *> *items __attribute__((swift_name("items")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorDefsThreadViewPref")))
@interface KbskyCoreActorDefsThreadViewPref : KbskyCoreActorDefsPreferencesUnion
- (instancetype)initWithType:(NSString *)type sort:(NSString * _Nullable)sort prioritizeFollowedUsers:(KbskyBoolean * _Nullable)prioritizeFollowedUsers __attribute__((swift_name("init(type:sort:prioritizeFollowedUsers:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreActorDefsThreadViewPrefCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreActorDefsThreadViewPref *)doCopyType:(NSString *)type sort:(NSString * _Nullable)sort prioritizeFollowedUsers:(KbskyBoolean * _Nullable)prioritizeFollowedUsers __attribute__((swift_name("doCopy(type:sort:prioritizeFollowedUsers:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KbskyBoolean * _Nullable prioritizeFollowedUsers __attribute__((swift_name("prioritizeFollowedUsers")));
@property NSString * _Nullable sort __attribute__((swift_name("sort")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorDefsProfileAssociatedChat")))
@interface KbskyCoreActorDefsProfileAssociatedChat : KbskyBase
- (instancetype)initWithAllowIncoming:(NSString *)allowIncoming __attribute__((swift_name("init(allowIncoming:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreActorDefsProfileAssociatedChatCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreActorDefsProfileAssociatedChat *)doCopyAllowIncoming:(NSString *)allowIncoming __attribute__((swift_name("doCopy(allowIncoming:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *allowIncoming __attribute__((swift_name("allowIncoming")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorDefsProfileAssociated.Companion")))
@interface KbskyCoreActorDefsProfileAssociatedCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreActorDefsProfileAssociatedCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorDefsKnownFollowers")))
@interface KbskyCoreActorDefsKnownFollowers : KbskyBase
- (instancetype)initWithCount:(int32_t)count followers:(NSArray<KbskyCoreActorDefsProfileViewBasic_ *> *)followers __attribute__((swift_name("init(count:followers:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreActorDefsKnownFollowersCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreActorDefsKnownFollowers *)doCopyCount:(int32_t)count followers:(NSArray<KbskyCoreActorDefsProfileViewBasic_ *> *)followers __attribute__((swift_name("doCopy(count:followers:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t count __attribute__((swift_name("count")));
@property NSArray<KbskyCoreActorDefsProfileViewBasic_ *> *followers __attribute__((swift_name("followers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorDefsViewerState.Companion")))
@interface KbskyCoreActorDefsViewerStateCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreActorDefsViewerStateCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLabelDefsLabel.Companion")))
@interface KbskyCoreLabelDefsLabelCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreLabelDefsLabelCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRepoStrongRef.Companion")))
@interface KbskyCoreRepoStrongRefCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreRepoStrongRefCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorDefsVerificationView")))
@interface KbskyCoreActorDefsVerificationView : KbskyBase
- (instancetype)initWithIssuer:(NSString *)issuer uri:(NSString *)uri isValid:(BOOL)isValid createdAt:(NSString *)createdAt __attribute__((swift_name("init(issuer:uri:isValid:createdAt:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreActorDefsVerificationViewCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreActorDefsVerificationView *)doCopyIssuer:(NSString *)issuer uri:(NSString *)uri isValid:(BOOL)isValid createdAt:(NSString *)createdAt __attribute__((swift_name("doCopy(issuer:uri:isValid:createdAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *createdAt __attribute__((swift_name("createdAt")));
@property (readonly) BOOL isValid __attribute__((swift_name("isValid")));
@property (readonly) NSString *issuer __attribute__((swift_name("issuer")));
@property (readonly) NSString *uri __attribute__((swift_name("uri")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorDefsVerificationState.Companion")))
@interface KbskyCoreActorDefsVerificationStateCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreActorDefsVerificationStateCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *STATUS_INVALID __attribute__((swift_name("STATUS_INVALID")));
@property (readonly) NSString *STATUS_NONE __attribute__((swift_name("STATUS_NONE")));
@property (readonly) NSString *STATUS_VALID __attribute__((swift_name("STATUS_VALID")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorDefsProfileView.Companion")))
@interface KbskyCoreActorDefsProfileViewCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreActorDefsProfileViewCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoDefsMessageViewSender.Companion")))
@interface KbskyCoreConvoDefsMessageViewSenderCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreConvoDefsMessageViewSenderCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorDefsProfileViewBasic")))
@interface KbskyCoreActorDefsProfileViewBasic : KbskyBase
- (instancetype)initWithDid:(NSString *)did handle:(NSString *)handle displayName:(NSString * _Nullable)displayName avatar:(NSString * _Nullable)avatar associated:(KbskyCoreActorDefsProfileAssociated * _Nullable)associated viewer:(KbskyCoreActorDefsViewerState * _Nullable)viewer labels:(NSArray<KbskyCoreLabelDefsLabel *> * _Nullable)labels chatDisabled:(BOOL)chatDisabled verification:(KbskyCoreActorDefsVerificationState * _Nullable)verification __attribute__((swift_name("init(did:handle:displayName:avatar:associated:viewer:labels:chatDisabled:verification:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreActorDefsProfileViewBasicCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreActorDefsProfileViewBasic *)doCopyDid:(NSString *)did handle:(NSString *)handle displayName:(NSString * _Nullable)displayName avatar:(NSString * _Nullable)avatar associated:(KbskyCoreActorDefsProfileAssociated * _Nullable)associated viewer:(KbskyCoreActorDefsViewerState * _Nullable)viewer labels:(NSArray<KbskyCoreLabelDefsLabel *> * _Nullable)labels chatDisabled:(BOOL)chatDisabled verification:(KbskyCoreActorDefsVerificationState * _Nullable)verification __attribute__((swift_name("doCopy(did:handle:displayName:avatar:associated:viewer:labels:chatDisabled:verification:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KbskyCoreActorDefsProfileAssociated * _Nullable associated __attribute__((swift_name("associated")));
@property NSString * _Nullable avatar __attribute__((swift_name("avatar")));
@property BOOL chatDisabled __attribute__((swift_name("chatDisabled")));
@property NSString *did __attribute__((swift_name("did")));
@property NSString * _Nullable displayName __attribute__((swift_name("displayName")));
@property NSString *handle __attribute__((swift_name("handle")));
@property NSArray<KbskyCoreLabelDefsLabel *> * _Nullable labels __attribute__((swift_name("labels")));
@property KbskyCoreActorDefsVerificationState * _Nullable verification __attribute__((swift_name("verification")));
@property KbskyCoreActorDefsViewerState * _Nullable viewer __attribute__((swift_name("viewer")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoDefsMessageAndReactionView")))
@interface KbskyCoreConvoDefsMessageAndReactionView : KbskyBase
- (instancetype)initWithType:(NSString *)type message:(KbskyCoreConvoDefsMessageView *)message reaction:(KbskyCoreConvoDefsReactionView *)reaction __attribute__((swift_name("init(type:message:reaction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreConvoDefsMessageAndReactionViewCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreConvoDefsMessageAndReactionView *)doCopyType:(NSString *)type message:(KbskyCoreConvoDefsMessageView *)message reaction:(KbskyCoreConvoDefsReactionView *)reaction __attribute__((swift_name("doCopy(type:message:reaction:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KbskyCoreConvoDefsMessageView *message __attribute__((swift_name("message")));
@property (readonly) KbskyCoreConvoDefsReactionView *reaction __attribute__((swift_name("reaction")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoDefsConvoView.Companion")))
@interface KbskyCoreConvoDefsConvoViewCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreConvoDefsConvoViewCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoDefsLogUnion.Companion")))
@interface KbskyCoreConvoDefsLogUnionCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreConvoDefsLogUnionCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoDefsLogAddReaction")))
@interface KbskyCoreConvoDefsLogAddReaction : KbskyCoreConvoDefsLogUnion
- (instancetype)initWithType:(NSString *)type rev:(NSString *)rev convoId:(NSString *)convoId message:(KbskyCoreConvoDefsMessageUnion *)message reaction:(KbskyCoreConvoDefsReactionView *)reaction __attribute__((swift_name("init(type:rev:convoId:message:reaction:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreConvoDefsLogAddReactionCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreConvoDefsLogAddReaction *)doCopyType:(NSString *)type rev:(NSString *)rev convoId:(NSString *)convoId message:(KbskyCoreConvoDefsMessageUnion *)message reaction:(KbskyCoreConvoDefsReactionView *)reaction __attribute__((swift_name("doCopy(type:rev:convoId:message:reaction:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *convoId __attribute__((swift_name("convoId")));
@property (readonly) KbskyCoreConvoDefsMessageUnion *message __attribute__((swift_name("message")));
@property (readonly) KbskyCoreConvoDefsReactionView *reaction __attribute__((swift_name("reaction")));
@property (readonly) NSString *rev __attribute__((swift_name("rev")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoDefsLogBeginConvo")))
@interface KbskyCoreConvoDefsLogBeginConvo : KbskyCoreConvoDefsLogUnion
- (instancetype)initWithType:(NSString *)type rev:(NSString *)rev convoId:(NSString *)convoId __attribute__((swift_name("init(type:rev:convoId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreConvoDefsLogBeginConvoCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreConvoDefsLogBeginConvo *)doCopyType:(NSString *)type rev:(NSString *)rev convoId:(NSString *)convoId __attribute__((swift_name("doCopy(type:rev:convoId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *convoId __attribute__((swift_name("convoId")));
@property NSString *rev __attribute__((swift_name("rev")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoDefsLogCreateMessage")))
@interface KbskyCoreConvoDefsLogCreateMessage : KbskyCoreConvoDefsLogUnion
- (instancetype)initWithType:(NSString *)type rev:(NSString *)rev convoId:(NSString *)convoId message:(KbskyCoreConvoDefsMessageUnion *)message __attribute__((swift_name("init(type:rev:convoId:message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreConvoDefsLogCreateMessageCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreConvoDefsLogCreateMessage *)doCopyType:(NSString *)type rev:(NSString *)rev convoId:(NSString *)convoId message:(KbskyCoreConvoDefsMessageUnion *)message __attribute__((swift_name("doCopy(type:rev:convoId:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *convoId __attribute__((swift_name("convoId")));
@property KbskyCoreConvoDefsMessageUnion *message __attribute__((swift_name("message")));
@property NSString *rev __attribute__((swift_name("rev")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoDefsLogDeleteMessage")))
@interface KbskyCoreConvoDefsLogDeleteMessage : KbskyCoreConvoDefsLogUnion
- (instancetype)initWithType:(NSString *)type rev:(NSString *)rev convoId:(NSString *)convoId message:(KbskyCoreConvoDefsMessageUnion *)message __attribute__((swift_name("init(type:rev:convoId:message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreConvoDefsLogDeleteMessageCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreConvoDefsLogDeleteMessage *)doCopyType:(NSString *)type rev:(NSString *)rev convoId:(NSString *)convoId message:(KbskyCoreConvoDefsMessageUnion *)message __attribute__((swift_name("doCopy(type:rev:convoId:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *convoId __attribute__((swift_name("convoId")));
@property KbskyCoreConvoDefsMessageUnion *message __attribute__((swift_name("message")));
@property NSString *rev __attribute__((swift_name("rev")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoDefsLogLeaveConvo")))
@interface KbskyCoreConvoDefsLogLeaveConvo : KbskyCoreConvoDefsLogUnion
- (instancetype)initWithType:(NSString *)type rev:(NSString *)rev convoId:(NSString *)convoId __attribute__((swift_name("init(type:rev:convoId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreConvoDefsLogLeaveConvoCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreConvoDefsLogLeaveConvo *)doCopyType:(NSString *)type rev:(NSString *)rev convoId:(NSString *)convoId __attribute__((swift_name("doCopy(type:rev:convoId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *convoId __attribute__((swift_name("convoId")));
@property NSString *rev __attribute__((swift_name("rev")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoDefsLogReadMessage")))
@interface KbskyCoreConvoDefsLogReadMessage : KbskyCoreConvoDefsLogUnion
- (instancetype)initWithType:(NSString *)type rev:(NSString *)rev convoId:(NSString *)convoId message:(KbskyCoreConvoDefsMessageUnion *)message __attribute__((swift_name("init(type:rev:convoId:message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreConvoDefsLogReadMessageCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreConvoDefsLogReadMessage *)doCopyType:(NSString *)type rev:(NSString *)rev convoId:(NSString *)convoId message:(KbskyCoreConvoDefsMessageUnion *)message __attribute__((swift_name("doCopy(type:rev:convoId:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *convoId __attribute__((swift_name("convoId")));
@property KbskyCoreConvoDefsMessageUnion *message __attribute__((swift_name("message")));
@property NSString *rev __attribute__((swift_name("rev")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoDefsLogRemoveReaction")))
@interface KbskyCoreConvoDefsLogRemoveReaction : KbskyCoreConvoDefsLogUnion
- (instancetype)initWithType:(NSString *)type rev:(NSString *)rev convoId:(NSString *)convoId message:(KbskyCoreConvoDefsMessageUnion *)message reaction:(KbskyCoreConvoDefsReactionView *)reaction __attribute__((swift_name("init(type:rev:convoId:message:reaction:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreConvoDefsLogRemoveReactionCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreConvoDefsLogRemoveReaction *)doCopyType:(NSString *)type rev:(NSString *)rev convoId:(NSString *)convoId message:(KbskyCoreConvoDefsMessageUnion *)message reaction:(KbskyCoreConvoDefsReactionView *)reaction __attribute__((swift_name("doCopy(type:rev:convoId:message:reaction:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *convoId __attribute__((swift_name("convoId")));
@property (readonly) KbskyCoreConvoDefsMessageUnion *message __attribute__((swift_name("message")));
@property (readonly) KbskyCoreConvoDefsReactionView *reaction __attribute__((swift_name("reaction")));
@property (readonly) NSString *rev __attribute__((swift_name("rev")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRichtextFacetByteSlice")))
@interface KbskyCoreRichtextFacetByteSlice : KbskyBase
- (instancetype)initWithByteStart:(KbskyInt * _Nullable)byteStart byteEnd:(KbskyInt * _Nullable)byteEnd __attribute__((swift_name("init(byteStart:byteEnd:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreRichtextFacetByteSliceCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreRichtextFacetByteSlice *)doCopyByteStart:(KbskyInt * _Nullable)byteStart byteEnd:(KbskyInt * _Nullable)byteEnd __attribute__((swift_name("doCopy(byteStart:byteEnd:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KbskyInt * _Nullable byteEnd __attribute__((swift_name("byteEnd")));
@property KbskyInt * _Nullable byteStart __attribute__((swift_name("byteStart")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=work/socialhub/kbsky/util/json/RichtextFacetFeaturePolymorphicSerializer))
*/
__attribute__((swift_name("CoreRichtextFacetFeatureUnion")))
@interface KbskyCoreRichtextFacetFeatureUnion : KbskyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KbskyCoreRichtextFacetFeatureUnionCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) KbskyCoreRichtextFacetLink * _Nullable asLink __attribute__((swift_name("asLink")));
@property (readonly) KbskyCoreRichtextFacetMention * _Nullable asMention __attribute__((swift_name("asMention")));
@property (readonly) KbskyCoreRichtextFacetTag * _Nullable asTag __attribute__((swift_name("asTag")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRichtextFacet.Companion")))
@interface KbskyCoreRichtextFacetCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreRichtextFacetCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoDefsReactionViewSender")))
@interface KbskyCoreConvoDefsReactionViewSender : KbskyBase
- (instancetype)initWithDid:(NSString *)did __attribute__((swift_name("init(did:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreConvoDefsReactionViewSenderCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreConvoDefsReactionViewSender *)doCopyDid:(NSString *)did __attribute__((swift_name("doCopy(did:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *did __attribute__((swift_name("did")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoDefsReactionView.Companion")))
@interface KbskyCoreConvoDefsReactionViewCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreConvoDefsReactionViewCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoDefsMessageInput.Companion")))
@interface KbskyCoreConvoDefsMessageInputCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreConvoDefsMessageInputCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmbedRecordViewUnion.Companion")))
@interface KbskyCoreEmbedRecordViewUnionCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreEmbedRecordViewUnionCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmbedRecordViewBlocked")))
@interface KbskyCoreEmbedRecordViewBlocked : KbskyCoreEmbedRecordViewUnion
- (instancetype)initWithType:(NSString *)type uri:(NSString * _Nullable)uri __attribute__((swift_name("init(type:uri:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreEmbedRecordViewBlockedCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreEmbedRecordViewBlocked *)doCopyType:(NSString *)type uri:(NSString * _Nullable)uri __attribute__((swift_name("doCopy(type:uri:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@property NSString * _Nullable uri __attribute__((swift_name("uri")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmbedRecordViewDetached")))
@interface KbskyCoreEmbedRecordViewDetached : KbskyCoreEmbedRecordViewUnion
- (instancetype)initWithType:(NSString *)type uri:(NSString * _Nullable)uri detached:(BOOL)detached __attribute__((swift_name("init(type:uri:detached:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreEmbedRecordViewDetachedCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreEmbedRecordViewDetached *)doCopyType:(NSString *)type uri:(NSString * _Nullable)uri detached:(BOOL)detached __attribute__((swift_name("doCopy(type:uri:detached:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property BOOL detached __attribute__((swift_name("detached")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@property NSString * _Nullable uri __attribute__((swift_name("uri")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmbedRecordViewNotFound")))
@interface KbskyCoreEmbedRecordViewNotFound : KbskyCoreEmbedRecordViewUnion
- (instancetype)initWithType:(NSString *)type uri:(NSString * _Nullable)uri __attribute__((swift_name("init(type:uri:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreEmbedRecordViewNotFoundCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreEmbedRecordViewNotFound *)doCopyType:(NSString *)type uri:(NSString * _Nullable)uri __attribute__((swift_name("doCopy(type:uri:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@property NSString * _Nullable uri __attribute__((swift_name("uri")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmbedRecordViewRecord")))
@interface KbskyCoreEmbedRecordViewRecord : KbskyCoreEmbedRecordViewUnion
- (instancetype)initWithType:(NSString *)type uri:(NSString * _Nullable)uri cid:(NSString * _Nullable)cid author:(KbskyCoreActorDefsProfileViewBasic_ * _Nullable)author value:(KbskyCoreRecordUnion * _Nullable)value labels:(NSArray<KbskyCoreLabelDefsLabel *> * _Nullable)labels embeds:(NSArray<KbskyCoreEmbedViewUnion *> * _Nullable)embeds indexedAt:(NSString * _Nullable)indexedAt __attribute__((swift_name("init(type:uri:cid:author:value:labels:embeds:indexedAt:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreEmbedRecordViewRecordCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreEmbedRecordViewRecord *)doCopyType:(NSString *)type uri:(NSString * _Nullable)uri cid:(NSString * _Nullable)cid author:(KbskyCoreActorDefsProfileViewBasic_ * _Nullable)author value:(KbskyCoreRecordUnion * _Nullable)value labels:(NSArray<KbskyCoreLabelDefsLabel *> * _Nullable)labels embeds:(NSArray<KbskyCoreEmbedViewUnion *> * _Nullable)embeds indexedAt:(NSString * _Nullable)indexedAt __attribute__((swift_name("doCopy(type:uri:cid:author:value:labels:embeds:indexedAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KbskyCoreActorDefsProfileViewBasic_ * _Nullable author __attribute__((swift_name("author")));
@property NSString * _Nullable cid __attribute__((swift_name("cid")));
@property NSArray<KbskyCoreEmbedViewUnion *> * _Nullable embeds __attribute__((swift_name("embeds")));
@property NSString * _Nullable indexedAt __attribute__((swift_name("indexedAt")));
@property NSArray<KbskyCoreLabelDefsLabel *> * _Nullable labels __attribute__((swift_name("labels")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@property NSString * _Nullable uri __attribute__((swift_name("uri")));
@property KbskyCoreRecordUnion * _Nullable value __attribute__((swift_name("value")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedDefsGeneratorViewerState")))
@interface KbskyCoreFeedDefsGeneratorViewerState : KbskyBase
- (instancetype)initWithLike:(NSString * _Nullable)like __attribute__((swift_name("init(like:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreFeedDefsGeneratorViewerStateCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreFeedDefsGeneratorViewerState *)doCopyLike:(NSString * _Nullable)like __attribute__((swift_name("doCopy(like:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable like __attribute__((swift_name("like")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedDefsGeneratorView.Companion")))
@interface KbskyCoreFeedDefsGeneratorViewCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreFeedDefsGeneratorViewCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedDefsReplyRef")))
@interface KbskyCoreFeedDefsReplyRef : KbskyBase
- (instancetype)initWithRoot:(KbskyCoreFeedDefsPostView * _Nullable)root parent:(KbskyCoreFeedDefsPostView * _Nullable)parent __attribute__((swift_name("init(root:parent:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreFeedDefsReplyRefCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreFeedDefsReplyRef *)doCopyRoot:(KbskyCoreFeedDefsPostView * _Nullable)root parent:(KbskyCoreFeedDefsPostView * _Nullable)parent __attribute__((swift_name("doCopy(root:parent:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KbskyCoreFeedDefsPostView * _Nullable parent __attribute__((swift_name("parent")));
@property KbskyCoreFeedDefsPostView * _Nullable root __attribute__((swift_name("root")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=work/socialhub/kbsky/util/json/FeedDefsReasonPolymorphicSerializer))
*/
__attribute__((swift_name("CoreFeedDefsReasonUnion")))
@interface KbskyCoreFeedDefsReasonUnion : KbskyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KbskyCoreFeedDefsReasonUnionCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) KbskyCoreFeedDefsReasonPin * _Nullable asReasonPin __attribute__((swift_name("asReasonPin")));
@property (readonly) KbskyCoreFeedDefsReasonRepost * _Nullable asReasonRepost __attribute__((swift_name("asReasonRepost")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedDefsFeedViewPost.Companion")))
@interface KbskyCoreFeedDefsFeedViewPostCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreFeedDefsFeedViewPostCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface KbskyKotlinEnumCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface KbskyKotlinArray<T> : KbskyBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(KbskyInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<KbskyKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedGetLikesLike.Companion")))
@interface KbskyCoreFeedGetLikesLikeCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreFeedGetLikesLikeCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedDefsThreadUnion.Companion")))
@interface KbskyCoreFeedDefsThreadUnionCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreFeedDefsThreadUnionCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedDefsNotFoundPost")))
@interface KbskyCoreFeedDefsNotFoundPost : KbskyCoreFeedDefsThreadUnion
- (instancetype)initWithType:(NSString *)type uri:(NSString * _Nullable)uri notFound:(BOOL)notFound __attribute__((swift_name("init(type:uri:notFound:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreFeedDefsNotFoundPostCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreFeedDefsNotFoundPost *)doCopyType:(NSString *)type uri:(NSString * _Nullable)uri notFound:(BOOL)notFound __attribute__((swift_name("doCopy(type:uri:notFound:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property BOOL notFound __attribute__((swift_name("notFound")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@property NSString * _Nullable uri __attribute__((swift_name("uri")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedDefsThreadViewPost")))
@interface KbskyCoreFeedDefsThreadViewPost : KbskyCoreFeedDefsThreadUnion
- (instancetype)initWithType:(NSString *)type post:(KbskyCoreFeedDefsPostView * _Nullable)post parent:(KbskyCoreFeedDefsThreadUnion * _Nullable)parent replies:(NSArray<KbskyCoreFeedDefsThreadUnion *> * _Nullable)replies __attribute__((swift_name("init(type:post:parent:replies:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreFeedDefsThreadViewPostCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreFeedDefsThreadViewPost *)doCopyType:(NSString *)type post:(KbskyCoreFeedDefsPostView * _Nullable)post parent:(KbskyCoreFeedDefsThreadUnion * _Nullable)parent replies:(NSArray<KbskyCoreFeedDefsThreadUnion *> * _Nullable)replies __attribute__((swift_name("doCopy(type:post:parent:replies:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KbskyCoreFeedDefsThreadUnion * _Nullable parent __attribute__((swift_name("parent")));
@property KbskyCoreFeedDefsPostView * _Nullable post __attribute__((swift_name("post")));
@property NSArray<KbskyCoreFeedDefsThreadUnion *> * _Nullable replies __attribute__((swift_name("replies")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorDefsProfileViewBasic_")))
@interface KbskyCoreActorDefsProfileViewBasic_ : KbskyBase
- (instancetype)initWithDid:(NSString *)did handle:(NSString *)handle displayName:(NSString * _Nullable)displayName avatar:(NSString * _Nullable)avatar viewer:(KbskyCoreActorDefsViewerState * _Nullable)viewer associated:(KbskyCoreActorDefsProfileAssociated * _Nullable)associated labels:(NSArray<KbskyCoreLabelDefsLabel *> * _Nullable)labels createdAt:(NSString * _Nullable)createdAt verification:(KbskyCoreActorDefsVerificationState * _Nullable)verification __attribute__((swift_name("init(did:handle:displayName:avatar:viewer:associated:labels:createdAt:verification:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreActorDefsProfileViewBasic_Companion *companion __attribute__((swift_name("companion")));
- (KbskyCoreActorDefsProfileViewBasic_ *)doCopyDid:(NSString *)did handle:(NSString *)handle displayName:(NSString * _Nullable)displayName avatar:(NSString * _Nullable)avatar viewer:(KbskyCoreActorDefsViewerState * _Nullable)viewer associated:(KbskyCoreActorDefsProfileAssociated * _Nullable)associated labels:(NSArray<KbskyCoreLabelDefsLabel *> * _Nullable)labels createdAt:(NSString * _Nullable)createdAt verification:(KbskyCoreActorDefsVerificationState * _Nullable)verification __attribute__((swift_name("doCopy(did:handle:displayName:avatar:viewer:associated:labels:createdAt:verification:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KbskyCoreActorDefsProfileAssociated * _Nullable associated __attribute__((swift_name("associated")));
@property NSString * _Nullable avatar __attribute__((swift_name("avatar")));
@property NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property NSString *did __attribute__((swift_name("did")));
@property NSString * _Nullable displayName __attribute__((swift_name("displayName")));
@property NSString *handle __attribute__((swift_name("handle")));
@property NSArray<KbskyCoreLabelDefsLabel *> * _Nullable labels __attribute__((swift_name("labels")));
@property KbskyCoreActorDefsVerificationState * _Nullable verification __attribute__((swift_name("verification")));
@property KbskyCoreActorDefsViewerState * _Nullable viewer __attribute__((swift_name("viewer")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=work/socialhub/kbsky/util/json/EmbedViewPolymorphicSerializer))
*/
__attribute__((swift_name("CoreEmbedViewUnion")))
@interface KbskyCoreEmbedViewUnion : KbskyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KbskyCoreEmbedViewUnionCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) KbskyCoreEmbedExternalView * _Nullable asExternal __attribute__((swift_name("asExternal")));
@property (readonly) KbskyCoreEmbedImagesView * _Nullable asImages __attribute__((swift_name("asImages")));
@property (readonly) KbskyCoreEmbedRecordView * _Nullable asRecord __attribute__((swift_name("asRecord")));
@property (readonly) KbskyCoreEmbedRecordWithMediaView * _Nullable asRecordWithMedia __attribute__((swift_name("asRecordWithMedia")));
@property (readonly) KbskyCoreEmbedVideoView * _Nullable asVideo __attribute__((swift_name("asVideo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedDefsViewerState")))
@interface KbskyCoreFeedDefsViewerState : KbskyBase
- (instancetype)initWithRepost:(NSString * _Nullable)repost like:(NSString * _Nullable)like replyDisabled:(KbskyBoolean * _Nullable)replyDisabled embeddingDisabled:(KbskyBoolean * _Nullable)embeddingDisabled pinned:(KbskyBoolean * _Nullable)pinned __attribute__((swift_name("init(repost:like:replyDisabled:embeddingDisabled:pinned:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreFeedDefsViewerStateCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreFeedDefsViewerState *)doCopyRepost:(NSString * _Nullable)repost like:(NSString * _Nullable)like replyDisabled:(KbskyBoolean * _Nullable)replyDisabled embeddingDisabled:(KbskyBoolean * _Nullable)embeddingDisabled pinned:(KbskyBoolean * _Nullable)pinned __attribute__((swift_name("doCopy(repost:like:replyDisabled:embeddingDisabled:pinned:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KbskyBoolean * _Nullable embeddingDisabled __attribute__((swift_name("embeddingDisabled")));
@property NSString * _Nullable like __attribute__((swift_name("like")));
@property KbskyBoolean * _Nullable pinned __attribute__((swift_name("pinned")));
@property KbskyBoolean * _Nullable replyDisabled __attribute__((swift_name("replyDisabled")));
@property NSString * _Nullable repost __attribute__((swift_name("repost")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedDefsThreadgateView")))
@interface KbskyCoreFeedDefsThreadgateView : KbskyBase
- (instancetype)initWithUri:(NSString * _Nullable)uri cid:(NSString * _Nullable)cid record:(KbskyCoreFeedThreadgate * _Nullable)record lists:(NSArray<KbskyCoreGraphDefsListViewBasic *> * _Nullable)lists __attribute__((swift_name("init(uri:cid:record:lists:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreFeedDefsThreadgateViewCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreFeedDefsThreadgateView *)doCopyUri:(NSString * _Nullable)uri cid:(NSString * _Nullable)cid record:(KbskyCoreFeedThreadgate * _Nullable)record lists:(NSArray<KbskyCoreGraphDefsListViewBasic *> * _Nullable)lists __attribute__((swift_name("doCopy(uri:cid:record:lists:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable cid __attribute__((swift_name("cid")));
@property NSArray<KbskyCoreGraphDefsListViewBasic *> * _Nullable lists __attribute__((swift_name("lists")));
@property KbskyCoreFeedThreadgate * _Nullable record __attribute__((swift_name("record")));
@property NSString * _Nullable uri __attribute__((swift_name("uri")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedDefsPostView.Companion")))
@interface KbskyCoreFeedDefsPostViewCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreFeedDefsPostViewCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedLike.Companion")))
@interface KbskyCoreFeedLikeCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreFeedLikeCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLabelDefsSelfLabel")))
@interface KbskyCoreLabelDefsSelfLabel : KbskyBase
- (instancetype)initWithVal:(NSString *)val __attribute__((swift_name("init(val:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreLabelDefsSelfLabelCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreLabelDefsSelfLabel *)doCopyVal:(NSString *)val __attribute__((swift_name("doCopy(val:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *val __attribute__((swift_name("val")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLabelDefsSelfLabels.Companion")))
@interface KbskyCoreLabelDefsSelfLabelsCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreLabelDefsSelfLabelsCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedPostReplyRef.Companion")))
@interface KbskyCoreFeedPostReplyRefCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreFeedPostReplyRefCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmbedUnion.Companion")))
@interface KbskyCoreEmbedUnionCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreEmbedUnionCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmbedExternal")))
@interface KbskyCoreEmbedExternal : KbskyCoreEmbedUnion
- (instancetype)initWithType:(NSString *)type external:(KbskyCoreEmbedExternalExternal * _Nullable)external __attribute__((swift_name("init(type:external:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreEmbedExternalCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreEmbedExternal *)doCopyType:(NSString *)type external:(KbskyCoreEmbedExternalExternal * _Nullable)external __attribute__((swift_name("doCopy(type:external:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KbskyCoreEmbedExternalExternal * _Nullable external __attribute__((swift_name("external")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmbedImages")))
@interface KbskyCoreEmbedImages : KbskyCoreEmbedUnion
- (instancetype)initWithType:(NSString *)type images:(NSArray<KbskyCoreEmbedImagesImage *> * _Nullable)images __attribute__((swift_name("init(type:images:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreEmbedImagesCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreEmbedImages *)doCopyType:(NSString *)type images:(NSArray<KbskyCoreEmbedImagesImage *> * _Nullable)images __attribute__((swift_name("doCopy(type:images:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSArray<KbskyCoreEmbedImagesImage *> * _Nullable images __attribute__((swift_name("images")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmbedRecord")))
@interface KbskyCoreEmbedRecord : KbskyCoreEmbedUnion
- (instancetype)initWithType:(NSString *)type record:(KbskyCoreRepoStrongRef * _Nullable)record __attribute__((swift_name("init(type:record:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreEmbedRecordCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreEmbedRecord *)doCopyType:(NSString *)type record:(KbskyCoreRepoStrongRef * _Nullable)record __attribute__((swift_name("doCopy(type:record:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KbskyCoreRepoStrongRef * _Nullable record __attribute__((swift_name("record")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmbedRecordWithMedia")))
@interface KbskyCoreEmbedRecordWithMedia : KbskyCoreEmbedUnion
- (instancetype)initWithType:(NSString *)type record:(KbskyCoreEmbedRecord * _Nullable)record media:(KbskyCoreEmbedUnion * _Nullable)media __attribute__((swift_name("init(type:record:media:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreEmbedRecordWithMediaCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreEmbedRecordWithMedia *)doCopyType:(NSString *)type record:(KbskyCoreEmbedRecord * _Nullable)record media:(KbskyCoreEmbedUnion * _Nullable)media __attribute__((swift_name("doCopy(type:record:media:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KbskyCoreEmbedUnion * _Nullable media __attribute__((swift_name("media")));
@property KbskyCoreEmbedRecord * _Nullable record __attribute__((swift_name("record")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmbedVideo")))
@interface KbskyCoreEmbedVideo : KbskyCoreEmbedUnion
- (instancetype)initWithType:(NSString *)type video:(KbskyCoreBlob * _Nullable)video alt:(NSString * _Nullable)alt aspectRatio:(KbskyCoreEmbedDefsAspectRatio * _Nullable)aspectRatio __attribute__((swift_name("init(type:video:alt:aspectRatio:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreEmbedVideoCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreEmbedVideo *)doCopyType:(NSString *)type video:(KbskyCoreBlob * _Nullable)video alt:(NSString * _Nullable)alt aspectRatio:(KbskyCoreEmbedDefsAspectRatio * _Nullable)aspectRatio __attribute__((swift_name("doCopy(type:video:alt:aspectRatio:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable alt __attribute__((swift_name("alt")));
@property KbskyCoreEmbedDefsAspectRatio * _Nullable aspectRatio __attribute__((swift_name("aspectRatio")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@property KbskyCoreBlob * _Nullable video __attribute__((swift_name("video")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedPost.Companion")))
@interface KbskyCoreFeedPostCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreFeedPostCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedPostgateEmbeddingRulesUnion.Companion")))
@interface KbskyCoreFeedPostgateEmbeddingRulesUnionCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreFeedPostgateEmbeddingRulesUnionCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedPostgateDisableRule")))
@interface KbskyCoreFeedPostgateDisableRule : KbskyCoreFeedPostgateEmbeddingRulesUnion
- (instancetype)initWithType:(NSString *)type __attribute__((swift_name("init(type:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreFeedPostgateDisableRuleCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreFeedPostgateDisableRule *)doCopyType:(NSString *)type __attribute__((swift_name("doCopy(type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedPostgate.Companion")))
@interface KbskyCoreFeedPostgateCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreFeedPostgateCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedRepost.Companion")))
@interface KbskyCoreFeedRepostCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreFeedRepostCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedThreadgateAllowUnion.Companion")))
@interface KbskyCoreFeedThreadgateAllowUnionCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreFeedThreadgateAllowUnionCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedThreadgateFollowingRule")))
@interface KbskyCoreFeedThreadgateFollowingRule : KbskyCoreFeedThreadgateAllowUnion
- (instancetype)initWithType:(NSString *)type __attribute__((swift_name("init(type:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreFeedThreadgateFollowingRuleCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreFeedThreadgateFollowingRule *)doCopyType:(NSString *)type __attribute__((swift_name("doCopy(type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedThreadgateListRule")))
@interface KbskyCoreFeedThreadgateListRule : KbskyCoreFeedThreadgateAllowUnion
- (instancetype)initWithType:(NSString *)type list:(NSString *)list __attribute__((swift_name("init(type:list:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreFeedThreadgateListRuleCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreFeedThreadgateListRule *)doCopyType:(NSString *)type list:(NSString *)list __attribute__((swift_name("doCopy(type:list:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *list __attribute__((swift_name("list")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedThreadgateMentionRule")))
@interface KbskyCoreFeedThreadgateMentionRule : KbskyCoreFeedThreadgateAllowUnion
- (instancetype)initWithType:(NSString *)type __attribute__((swift_name("init(type:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreFeedThreadgateMentionRuleCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreFeedThreadgateMentionRule *)doCopyType:(NSString *)type __attribute__((swift_name("doCopy(type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedThreadgate.Companion")))
@interface KbskyCoreFeedThreadgateCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreFeedThreadgateCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphListItem.Companion")))
@interface KbskyCoreGraphListItemCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreGraphListItemCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphBlock.Companion")))
@interface KbskyCoreGraphBlockCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreGraphBlockCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphList.Companion")))
@interface KbskyCoreGraphListCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreGraphListCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphFollow.Companion")))
@interface KbskyCoreGraphFollowCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreGraphFollowCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphDefsListViewerState")))
@interface KbskyCoreGraphDefsListViewerState : KbskyBase
- (instancetype)initWithRepost:(NSString * _Nullable)repost like:(NSString * _Nullable)like replyDisabled:(KbskyBoolean * _Nullable)replyDisabled __attribute__((swift_name("init(repost:like:replyDisabled:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreGraphDefsListViewerStateCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreGraphDefsListViewerState *)doCopyRepost:(NSString * _Nullable)repost like:(NSString * _Nullable)like replyDisabled:(KbskyBoolean * _Nullable)replyDisabled __attribute__((swift_name("doCopy(repost:like:replyDisabled:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable like __attribute__((swift_name("like")));
@property KbskyBoolean * _Nullable replyDisabled __attribute__((swift_name("replyDisabled")));
@property NSString * _Nullable repost __attribute__((swift_name("repost")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphDefsListView.Companion")))
@interface KbskyCoreGraphDefsListViewCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreGraphDefsListViewCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphDefsListItemView.Companion")))
@interface KbskyCoreGraphDefsListItemViewCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreGraphDefsListItemViewCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphDefsListViewBasic")))
@interface KbskyCoreGraphDefsListViewBasic : KbskyBase
- (instancetype)initWithType:(NSString *)type uri:(NSString * _Nullable)uri cid:(NSString * _Nullable)cid name:(NSString * _Nullable)name purpose:(NSString * _Nullable)purpose avatar:(NSString * _Nullable)avatar viewer:(KbskyCoreGraphDefsListViewerState * _Nullable)viewer indexedAt:(NSString * _Nullable)indexedAt __attribute__((swift_name("init(type:uri:cid:name:purpose:avatar:viewer:indexedAt:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreGraphDefsListViewBasicCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreGraphDefsListViewBasic *)doCopyType:(NSString *)type uri:(NSString * _Nullable)uri cid:(NSString * _Nullable)cid name:(NSString * _Nullable)name purpose:(NSString * _Nullable)purpose avatar:(NSString * _Nullable)avatar viewer:(KbskyCoreGraphDefsListViewerState * _Nullable)viewer indexedAt:(NSString * _Nullable)indexedAt __attribute__((swift_name("doCopy(type:uri:cid:name:purpose:avatar:viewer:indexedAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable avatar __attribute__((swift_name("avatar")));
@property NSString * _Nullable cid __attribute__((swift_name("cid")));
@property NSString * _Nullable indexedAt __attribute__((swift_name("indexedAt")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property NSString * _Nullable purpose __attribute__((swift_name("purpose")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@property NSString * _Nullable uri __attribute__((swift_name("uri")));
@property KbskyCoreGraphDefsListViewerState * _Nullable viewer __attribute__((swift_name("viewer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphDefsStarterPackView.Companion")))
@interface KbskyCoreGraphDefsStarterPackViewCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreGraphDefsStarterPackViewCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphDefsStarterPackViewBasic.Companion")))
@interface KbskyCoreGraphDefsStarterPackViewBasicCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreGraphDefsStarterPackViewBasicCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLabelerViewUnion.Companion")))
@interface KbskyCoreLabelerViewUnionCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreLabelerViewUnionCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLabelerView")))
@interface KbskyCoreLabelerView : KbskyCoreLabelerViewUnion
- (instancetype)initWithType:(NSString *)type uri:(NSString * _Nullable)uri cid:(NSString * _Nullable)cid creator:(KbskyCoreActorDefsProfileView * _Nullable)creator likeCount:(KbskyInt * _Nullable)likeCount viewer:(KbskyCoreLabelerViewerState * _Nullable)viewer indexedAt:(NSString * _Nullable)indexedAt labels:(NSArray<KbskyCoreLabelDefsLabel *> * _Nullable)labels __attribute__((swift_name("init(type:uri:cid:creator:likeCount:viewer:indexedAt:labels:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreLabelerViewCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreLabelerView *)doCopyType:(NSString *)type uri:(NSString * _Nullable)uri cid:(NSString * _Nullable)cid creator:(KbskyCoreActorDefsProfileView * _Nullable)creator likeCount:(KbskyInt * _Nullable)likeCount viewer:(KbskyCoreLabelerViewerState * _Nullable)viewer indexedAt:(NSString * _Nullable)indexedAt labels:(NSArray<KbskyCoreLabelDefsLabel *> * _Nullable)labels __attribute__((swift_name("doCopy(type:uri:cid:creator:likeCount:viewer:indexedAt:labels:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable cid __attribute__((swift_name("cid")));
@property KbskyCoreActorDefsProfileView * _Nullable creator __attribute__((swift_name("creator")));
@property NSString * _Nullable indexedAt __attribute__((swift_name("indexedAt")));
@property NSArray<KbskyCoreLabelDefsLabel *> * _Nullable labels __attribute__((swift_name("labels")));
@property KbskyInt * _Nullable likeCount __attribute__((swift_name("likeCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@property NSString * _Nullable uri __attribute__((swift_name("uri")));
@property KbskyCoreLabelerViewerState * _Nullable viewer __attribute__((swift_name("viewer")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLabelerViewDetailed")))
@interface KbskyCoreLabelerViewDetailed : KbskyCoreLabelerViewUnion
- (instancetype)initWithType:(NSString *)type uri:(NSString * _Nullable)uri cid:(NSString * _Nullable)cid creator:(KbskyCoreActorDefsProfileView * _Nullable)creator policies:(KbskyCoreLabelerPolicies * _Nullable)policies likeCount:(KbskyInt * _Nullable)likeCount viewer:(KbskyCoreLabelerViewerState * _Nullable)viewer indexedAt:(NSString * _Nullable)indexedAt labels:(NSArray<KbskyCoreLabelDefsLabel *> * _Nullable)labels __attribute__((swift_name("init(type:uri:cid:creator:policies:likeCount:viewer:indexedAt:labels:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreLabelerViewDetailedCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreLabelerViewDetailed *)doCopyType:(NSString *)type uri:(NSString * _Nullable)uri cid:(NSString * _Nullable)cid creator:(KbskyCoreActorDefsProfileView * _Nullable)creator policies:(KbskyCoreLabelerPolicies * _Nullable)policies likeCount:(KbskyInt * _Nullable)likeCount viewer:(KbskyCoreLabelerViewerState * _Nullable)viewer indexedAt:(NSString * _Nullable)indexedAt labels:(NSArray<KbskyCoreLabelDefsLabel *> * _Nullable)labels __attribute__((swift_name("doCopy(type:uri:cid:creator:policies:likeCount:viewer:indexedAt:labels:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable cid __attribute__((swift_name("cid")));
@property KbskyCoreActorDefsProfileView * _Nullable creator __attribute__((swift_name("creator")));
@property NSString * _Nullable indexedAt __attribute__((swift_name("indexedAt")));
@property NSArray<KbskyCoreLabelDefsLabel *> * _Nullable labels __attribute__((swift_name("labels")));
@property KbskyInt * _Nullable likeCount __attribute__((swift_name("likeCount")));
@property KbskyCoreLabelerPolicies * _Nullable policies __attribute__((swift_name("policies")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@property NSString * _Nullable uri __attribute__((swift_name("uri")));
@property KbskyCoreLabelerViewerState * _Nullable viewer __attribute__((swift_name("viewer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotificationListNotificationsNotification.Companion")))
@interface KbskyCoreNotificationListNotificationsNotificationCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreNotificationListNotificationsNotificationCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol KbskyKotlinx_serialization_coreEncoder
@required
- (id<KbskyKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<KbskyKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<KbskyKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<KbskyKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<KbskyKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<KbskyKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<KbskyKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<KbskyKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<KbskyKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) KbskyKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol KbskyKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<KbskyKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<KbskyKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<KbskyKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) KbskyKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol KbskyKotlinx_serialization_coreDecoder
@required
- (id<KbskyKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<KbskyKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<KbskyKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<KbskyKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<KbskyKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (KbskyKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<KbskyKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<KbskyKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) KbskyKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDIDLogPDS.Companion")))
@interface KbskyCoreDIDLogPDSCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreDIDLogPDSCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol KbskyKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol KbskyKotlinSuspendFunction1 <KbskyKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface KbskyKtor_httpHttpMethod : KbskyBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (KbskyKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KhttpclientHttpParameter")))
@interface KbskyKhttpclientHttpParameter : KbskyBase
- (instancetype)initWithType:(KbskyKhttpclientHttpParameterType *)type key:(NSString *)key value:(NSString * _Nullable)value fileName:(NSString * _Nullable)fileName fileBody:(KbskyKotlinByteArray * _Nullable)fileBody __attribute__((swift_name("init(type:key:value:fileName:fileBody:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyKhttpclientHttpParameterCompanion *companion __attribute__((swift_name("companion")));
- (KbskyKtor_httpContentType *)fileContentType __attribute__((swift_name("fileContentType()")));
- (NSString * _Nullable)fileExtension __attribute__((swift_name("fileExtension()")));
@property (readonly) KbskyKotlinByteArray * _Nullable fileBody __attribute__((swift_name("fileBody")));
@property (readonly) NSString * _Nullable fileName __attribute__((swift_name("fileName")));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@property (readonly) KbskyKhttpclientHttpParameterType *type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KhttpclientHttpResponse.Companion")))
@interface KbskyKhttpclientHttpResponseCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyKhttpclientHttpResponseCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)fromResponse:(KbskyKtor_client_coreHttpResponse *)response completionHandler:(void (^)(KbskyKhttpclientHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("from(response:completionHandler:)")));
@property (readonly) KbskyKotlinx_serialization_jsonJson *mapper __attribute__((swift_name("mapper")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialFormat")))
@protocol KbskyKotlinx_serialization_coreSerialFormat
@required
@property (readonly) KbskyKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreStringFormat")))
@protocol KbskyKotlinx_serialization_coreStringFormat <KbskyKotlinx_serialization_coreSerialFormat>
@required
- (id _Nullable)decodeFromStringDeserializer:(id<KbskyKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (NSString *)encodeToStringSerializer:(id<KbskyKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_jsonJson")))
@interface KbskyKotlinx_serialization_jsonJson : KbskyBase <KbskyKotlinx_serialization_coreStringFormat>
@property (class, readonly, getter=companion) KbskyKotlinx_serialization_jsonJsonDefault *companion __attribute__((swift_name("companion")));
- (id _Nullable)decodeFromJsonElementDeserializer:(id<KbskyKotlinx_serialization_coreDeserializationStrategy>)deserializer element:(KbskyKotlinx_serialization_jsonJsonElement *)element __attribute__((swift_name("decodeFromJsonElement(deserializer:element:)")));
- (id _Nullable)decodeFromStringString:(NSString *)string __attribute__((swift_name("decodeFromString(string:)")));
- (id _Nullable)decodeFromStringDeserializer:(id<KbskyKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (KbskyKotlinx_serialization_jsonJsonElement *)encodeToJsonElementSerializer:(id<KbskyKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(serializer:value:)")));
- (NSString *)encodeToStringValue:(id _Nullable)value __attribute__((swift_name("encodeToString(value:)")));
- (NSString *)encodeToStringSerializer:(id<KbskyKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
- (KbskyKotlinx_serialization_jsonJsonElement *)parseToJsonElementString:(NSString *)string __attribute__((swift_name("parseToJsonElement(string:)")));
@property (readonly) KbskyKotlinx_serialization_jsonJsonConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) KbskyKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorProfile.Companion")))
@interface KbskyCoreActorProfileCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreActorProfileCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphStarterPackFeedItem")))
@interface KbskyCoreGraphStarterPackFeedItem : KbskyBase
- (instancetype)initWithUri:(NSString *)uri __attribute__((swift_name("init(uri:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreGraphStarterPackFeedItemCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreGraphStarterPackFeedItem *)doCopyUri:(NSString *)uri __attribute__((swift_name("doCopy(uri:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *uri __attribute__((swift_name("uri")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphStarterPack.Companion")))
@interface KbskyCoreGraphStarterPackCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreGraphStarterPackCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlobRef.Companion")))
@interface KbskyCoreBlobRefCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreBlobRefCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorDefsAdultContentPref.Companion")))
@interface KbskyCoreActorDefsAdultContentPrefCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreActorDefsAdultContentPrefCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorDefsContentLabelPref.Companion")))
@interface KbskyCoreActorDefsContentLabelPrefCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreActorDefsContentLabelPrefCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorDefsFeedViewPref.Companion")))
@interface KbskyCoreActorDefsFeedViewPrefCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreActorDefsFeedViewPrefCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorDefsLabelerPrefItem")))
@interface KbskyCoreActorDefsLabelerPrefItem : KbskyBase
- (instancetype)initWithDid:(NSString *)did __attribute__((swift_name("init(did:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreActorDefsLabelerPrefItemCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreActorDefsLabelerPrefItem *)doCopyDid:(NSString *)did __attribute__((swift_name("doCopy(did:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *did __attribute__((swift_name("did")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorDefsLabelersPref.Companion")))
@interface KbskyCoreActorDefsLabelersPrefCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreActorDefsLabelersPrefCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorDefsPersonalDetailsPref.Companion")))
@interface KbskyCoreActorDefsPersonalDetailsPrefCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreActorDefsPersonalDetailsPrefCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorDefsSavedFeedsPref.Companion")))
@interface KbskyCoreActorDefsSavedFeedsPrefCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreActorDefsSavedFeedsPrefCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorDefsSavedFeed")))
@interface KbskyCoreActorDefsSavedFeed : KbskyBase
- (instancetype)initWithId:(NSString *)id type:(NSString *)type value:(NSString *)value pinned:(BOOL)pinned __attribute__((swift_name("init(id:type:value:pinned:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreActorDefsSavedFeedCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreActorDefsSavedFeed *)doCopyId:(NSString *)id type:(NSString *)type value:(NSString *)value pinned:(BOOL)pinned __attribute__((swift_name("doCopy(id:type:value:pinned:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL pinned __attribute__((swift_name("pinned")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorDefsSavedFeedsPrefV2.Companion")))
@interface KbskyCoreActorDefsSavedFeedsPrefV2Companion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreActorDefsSavedFeedsPrefV2Companion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorDefsThreadViewPref.Companion")))
@interface KbskyCoreActorDefsThreadViewPrefCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreActorDefsThreadViewPrefCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorDefsProfileAssociatedChat.Companion")))
@interface KbskyCoreActorDefsProfileAssociatedChatCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreActorDefsProfileAssociatedChatCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorDefsKnownFollowers.Companion")))
@interface KbskyCoreActorDefsKnownFollowersCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreActorDefsKnownFollowersCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorDefsVerificationView.Companion")))
@interface KbskyCoreActorDefsVerificationViewCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreActorDefsVerificationViewCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorDefsProfileViewBasic.Companion")))
@interface KbskyCoreActorDefsProfileViewBasicCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreActorDefsProfileViewBasicCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoDefsMessageAndReactionView.Companion")))
@interface KbskyCoreConvoDefsMessageAndReactionViewCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreConvoDefsMessageAndReactionViewCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoDefsLogAddReaction.Companion")))
@interface KbskyCoreConvoDefsLogAddReactionCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreConvoDefsLogAddReactionCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoDefsLogBeginConvo.Companion")))
@interface KbskyCoreConvoDefsLogBeginConvoCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreConvoDefsLogBeginConvoCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoDefsLogCreateMessage.Companion")))
@interface KbskyCoreConvoDefsLogCreateMessageCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreConvoDefsLogCreateMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoDefsLogDeleteMessage.Companion")))
@interface KbskyCoreConvoDefsLogDeleteMessageCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreConvoDefsLogDeleteMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoDefsLogLeaveConvo.Companion")))
@interface KbskyCoreConvoDefsLogLeaveConvoCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreConvoDefsLogLeaveConvoCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoDefsLogReadMessage.Companion")))
@interface KbskyCoreConvoDefsLogReadMessageCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreConvoDefsLogReadMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoDefsLogRemoveReaction.Companion")))
@interface KbskyCoreConvoDefsLogRemoveReactionCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreConvoDefsLogRemoveReactionCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRichtextFacetByteSlice.Companion")))
@interface KbskyCoreRichtextFacetByteSliceCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreRichtextFacetByteSliceCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRichtextFacetFeatureUnion.Companion")))
@interface KbskyCoreRichtextFacetFeatureUnionCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreRichtextFacetFeatureUnionCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRichtextFacetLink")))
@interface KbskyCoreRichtextFacetLink : KbskyCoreRichtextFacetFeatureUnion
- (instancetype)initWithType:(NSString *)type uri:(NSString * _Nullable)uri __attribute__((swift_name("init(type:uri:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreRichtextFacetLinkCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreRichtextFacetLink *)doCopyType:(NSString *)type uri:(NSString * _Nullable)uri __attribute__((swift_name("doCopy(type:uri:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@property NSString * _Nullable uri __attribute__((swift_name("uri")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRichtextFacetMention")))
@interface KbskyCoreRichtextFacetMention : KbskyCoreRichtextFacetFeatureUnion
- (instancetype)initWithType:(NSString *)type did:(NSString * _Nullable)did __attribute__((swift_name("init(type:did:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreRichtextFacetMentionCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreRichtextFacetMention *)doCopyType:(NSString *)type did:(NSString * _Nullable)did __attribute__((swift_name("doCopy(type:did:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable did __attribute__((swift_name("did")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRichtextFacetTag")))
@interface KbskyCoreRichtextFacetTag : KbskyCoreRichtextFacetFeatureUnion
- (instancetype)initWithType:(NSString *)type tag:(NSString *)tag __attribute__((swift_name("init(type:tag:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreRichtextFacetTagCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreRichtextFacetTag *)doCopyType:(NSString *)type tag:(NSString *)tag __attribute__((swift_name("doCopy(type:tag:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *tag __attribute__((swift_name("tag")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConvoDefsReactionViewSender.Companion")))
@interface KbskyCoreConvoDefsReactionViewSenderCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreConvoDefsReactionViewSenderCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmbedRecordViewBlocked.Companion")))
@interface KbskyCoreEmbedRecordViewBlockedCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreEmbedRecordViewBlockedCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmbedRecordViewDetached.Companion")))
@interface KbskyCoreEmbedRecordViewDetachedCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreEmbedRecordViewDetachedCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmbedRecordViewNotFound.Companion")))
@interface KbskyCoreEmbedRecordViewNotFoundCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreEmbedRecordViewNotFoundCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmbedRecordViewRecord.Companion")))
@interface KbskyCoreEmbedRecordViewRecordCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreEmbedRecordViewRecordCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedDefsGeneratorViewerState.Companion")))
@interface KbskyCoreFeedDefsGeneratorViewerStateCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreFeedDefsGeneratorViewerStateCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedDefsReplyRef.Companion")))
@interface KbskyCoreFeedDefsReplyRefCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreFeedDefsReplyRefCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedDefsReasonUnion.Companion")))
@interface KbskyCoreFeedDefsReasonUnionCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreFeedDefsReasonUnionCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedDefsReasonPin")))
@interface KbskyCoreFeedDefsReasonPin : KbskyCoreFeedDefsReasonUnion
- (instancetype)initWithType:(NSString *)type __attribute__((swift_name("init(type:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreFeedDefsReasonPinCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreFeedDefsReasonPin *)doCopyType:(NSString *)type __attribute__((swift_name("doCopy(type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedDefsReasonRepost")))
@interface KbskyCoreFeedDefsReasonRepost : KbskyCoreFeedDefsReasonUnion
- (instancetype)initWithType:(NSString *)type by:(KbskyCoreActorDefsProfileViewBasic_ * _Nullable)by indexedAt:(NSString * _Nullable)indexedAt __attribute__((swift_name("init(type:by:indexedAt:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreFeedDefsReasonRepostCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreFeedDefsReasonRepost *)doCopyType:(NSString *)type by:(KbskyCoreActorDefsProfileViewBasic_ * _Nullable)by indexedAt:(NSString * _Nullable)indexedAt __attribute__((swift_name("doCopy(type:by:indexedAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KbskyCoreActorDefsProfileViewBasic_ * _Nullable by __attribute__((swift_name("by")));
@property NSString * _Nullable indexedAt __attribute__((swift_name("indexedAt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedDefsNotFoundPost.Companion")))
@interface KbskyCoreFeedDefsNotFoundPostCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreFeedDefsNotFoundPostCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedDefsThreadViewPost.Companion")))
@interface KbskyCoreFeedDefsThreadViewPostCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreFeedDefsThreadViewPostCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorDefsProfileViewBasic_.Companion")))
@interface KbskyCoreActorDefsProfileViewBasic_Companion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreActorDefsProfileViewBasic_Companion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmbedViewUnion.Companion")))
@interface KbskyCoreEmbedViewUnionCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreEmbedViewUnionCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmbedExternalView")))
@interface KbskyCoreEmbedExternalView : KbskyCoreEmbedViewUnion
- (instancetype)initWithType:(NSString *)type external:(KbskyCoreEmbedExternalViewExternal * _Nullable)external __attribute__((swift_name("init(type:external:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreEmbedExternalViewCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreEmbedExternalView *)doCopyType:(NSString *)type external:(KbskyCoreEmbedExternalViewExternal * _Nullable)external __attribute__((swift_name("doCopy(type:external:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KbskyCoreEmbedExternalViewExternal * _Nullable external __attribute__((swift_name("external")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmbedImagesView")))
@interface KbskyCoreEmbedImagesView : KbskyCoreEmbedViewUnion
- (instancetype)initWithType:(NSString *)type images:(NSArray<KbskyCoreEmbedImagesViewImage *> * _Nullable)images __attribute__((swift_name("init(type:images:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreEmbedImagesViewCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreEmbedImagesView *)doCopyType:(NSString *)type images:(NSArray<KbskyCoreEmbedImagesViewImage *> * _Nullable)images __attribute__((swift_name("doCopy(type:images:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSArray<KbskyCoreEmbedImagesViewImage *> * _Nullable images __attribute__((swift_name("images")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmbedRecordView")))
@interface KbskyCoreEmbedRecordView : KbskyCoreEmbedViewUnion
- (instancetype)initWithType:(NSString *)type record:(KbskyCoreEmbedRecordViewUnion * _Nullable)record __attribute__((swift_name("init(type:record:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreEmbedRecordViewCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreEmbedRecordView *)doCopyType:(NSString *)type record:(KbskyCoreEmbedRecordViewUnion * _Nullable)record __attribute__((swift_name("doCopy(type:record:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KbskyCoreEmbedRecordViewUnion * _Nullable record __attribute__((swift_name("record")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmbedRecordWithMediaView")))
@interface KbskyCoreEmbedRecordWithMediaView : KbskyCoreEmbedViewUnion
- (instancetype)initWithType:(NSString *)type record:(KbskyCoreEmbedRecordView * _Nullable)record media:(KbskyCoreEmbedViewUnion * _Nullable)media __attribute__((swift_name("init(type:record:media:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreEmbedRecordWithMediaViewCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreEmbedRecordWithMediaView *)doCopyType:(NSString *)type record:(KbskyCoreEmbedRecordView * _Nullable)record media:(KbskyCoreEmbedViewUnion * _Nullable)media __attribute__((swift_name("doCopy(type:record:media:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KbskyCoreEmbedViewUnion * _Nullable media __attribute__((swift_name("media")));
@property KbskyCoreEmbedRecordView * _Nullable record __attribute__((swift_name("record")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmbedVideoView")))
@interface KbskyCoreEmbedVideoView : KbskyCoreEmbedViewUnion
- (instancetype)initWithType:(NSString *)type cid:(NSString *)cid playlist:(NSString *)playlist thumbnail:(NSString * _Nullable)thumbnail alt:(NSString * _Nullable)alt aspectRatio:(KbskyCoreEmbedDefsAspectRatio * _Nullable)aspectRatio __attribute__((swift_name("init(type:cid:playlist:thumbnail:alt:aspectRatio:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyCoreEmbedVideoViewCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreEmbedVideoView *)doCopyType:(NSString *)type cid:(NSString *)cid playlist:(NSString *)playlist thumbnail:(NSString * _Nullable)thumbnail alt:(NSString * _Nullable)alt aspectRatio:(KbskyCoreEmbedDefsAspectRatio * _Nullable)aspectRatio __attribute__((swift_name("doCopy(type:cid:playlist:thumbnail:alt:aspectRatio:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable alt __attribute__((swift_name("alt")));
@property KbskyCoreEmbedDefsAspectRatio * _Nullable aspectRatio __attribute__((swift_name("aspectRatio")));
@property NSString *cid __attribute__((swift_name("cid")));
@property NSString *playlist __attribute__((swift_name("playlist")));
@property NSString * _Nullable thumbnail __attribute__((swift_name("thumbnail")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="$type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedDefsViewerState.Companion")))
@interface KbskyCoreFeedDefsViewerStateCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreFeedDefsViewerStateCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedDefsThreadgateView.Companion")))
@interface KbskyCoreFeedDefsThreadgateViewCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreFeedDefsThreadgateViewCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLabelDefsSelfLabel.Companion")))
@interface KbskyCoreLabelDefsSelfLabelCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreLabelDefsSelfLabelCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmbedExternalExternal")))
@interface KbskyCoreEmbedExternalExternal : KbskyBase
- (instancetype)initWithUri:(NSString *)uri title:(NSString *)title description:(NSString *)description thumb:(KbskyCoreBlob * _Nullable)thumb __attribute__((swift_name("init(uri:title:description:thumb:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreEmbedExternalExternalCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreEmbedExternalExternal *)doCopyUri:(NSString *)uri title:(NSString *)title description:(NSString *)description thumb:(KbskyCoreBlob * _Nullable)thumb __attribute__((swift_name("doCopy(uri:title:description:thumb:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (setter=setDescription:) NSString *description_ __attribute__((swift_name("description_")));
@property KbskyCoreBlob * _Nullable thumb __attribute__((swift_name("thumb")));
@property NSString *title __attribute__((swift_name("title")));
@property NSString *uri __attribute__((swift_name("uri")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmbedExternal.Companion")))
@interface KbskyCoreEmbedExternalCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreEmbedExternalCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmbedImagesImage")))
@interface KbskyCoreEmbedImagesImage : KbskyBase
- (instancetype)initWithImage:(KbskyCoreBlob * _Nullable)image alt:(NSString * _Nullable)alt aspectRatio:(KbskyCoreEmbedDefsAspectRatio * _Nullable)aspectRatio __attribute__((swift_name("init(image:alt:aspectRatio:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreEmbedImagesImageCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreEmbedImagesImage *)doCopyImage:(KbskyCoreBlob * _Nullable)image alt:(NSString * _Nullable)alt aspectRatio:(KbskyCoreEmbedDefsAspectRatio * _Nullable)aspectRatio __attribute__((swift_name("doCopy(image:alt:aspectRatio:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable alt __attribute__((swift_name("alt")));
@property KbskyCoreEmbedDefsAspectRatio * _Nullable aspectRatio __attribute__((swift_name("aspectRatio")));
@property KbskyCoreBlob * _Nullable image __attribute__((swift_name("image")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmbedImages.Companion")))
@interface KbskyCoreEmbedImagesCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreEmbedImagesCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmbedRecord.Companion")))
@interface KbskyCoreEmbedRecordCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreEmbedRecordCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmbedRecordWithMedia.Companion")))
@interface KbskyCoreEmbedRecordWithMediaCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreEmbedRecordWithMediaCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmbedDefsAspectRatio")))
@interface KbskyCoreEmbedDefsAspectRatio : KbskyBase
- (instancetype)initWithWidth:(int32_t)width height:(int32_t)height __attribute__((swift_name("init(width:height:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreEmbedDefsAspectRatioCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreEmbedDefsAspectRatio *)doCopyWidth:(int32_t)width height:(int32_t)height __attribute__((swift_name("doCopy(width:height:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property int32_t height __attribute__((swift_name("height")));
@property int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmbedVideo.Companion")))
@interface KbskyCoreEmbedVideoCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreEmbedVideoCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedPostgateDisableRule.Companion")))
@interface KbskyCoreFeedPostgateDisableRuleCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreFeedPostgateDisableRuleCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedThreadgateFollowingRule.Companion")))
@interface KbskyCoreFeedThreadgateFollowingRuleCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreFeedThreadgateFollowingRuleCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedThreadgateListRule.Companion")))
@interface KbskyCoreFeedThreadgateListRuleCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreFeedThreadgateListRuleCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedThreadgateMentionRule.Companion")))
@interface KbskyCoreFeedThreadgateMentionRuleCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreFeedThreadgateMentionRuleCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphDefsListViewerState.Companion")))
@interface KbskyCoreGraphDefsListViewerStateCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreGraphDefsListViewerStateCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphDefsListViewBasic.Companion")))
@interface KbskyCoreGraphDefsListViewBasicCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreGraphDefsListViewBasicCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLabelerViewerState")))
@interface KbskyCoreLabelerViewerState : KbskyBase
- (instancetype)initWithLike:(NSString * _Nullable)like __attribute__((swift_name("init(like:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreLabelerViewerStateCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreLabelerViewerState *)doCopyLike:(NSString * _Nullable)like __attribute__((swift_name("doCopy(like:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable like __attribute__((swift_name("like")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLabelerView.Companion")))
@interface KbskyCoreLabelerViewCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreLabelerViewCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLabelerPolicies")))
@interface KbskyCoreLabelerPolicies : KbskyBase
- (instancetype)initWithLabelValues:(NSArray<NSString *> *)labelValues labelValueDefinitions:(NSArray<KbskyCoreLabelDefsLabelValueDefinition *> *)labelValueDefinitions __attribute__((swift_name("init(labelValues:labelValueDefinitions:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreLabelerPoliciesCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreLabelerPolicies *)doCopyLabelValues:(NSArray<NSString *> *)labelValues labelValueDefinitions:(NSArray<KbskyCoreLabelDefsLabelValueDefinition *> *)labelValueDefinitions __attribute__((swift_name("doCopy(labelValues:labelValueDefinitions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSArray<KbskyCoreLabelDefsLabelValueDefinition *> *labelValueDefinitions __attribute__((swift_name("labelValueDefinitions")));
@property NSArray<NSString *> *labelValues __attribute__((swift_name("labelValues")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLabelerViewDetailed.Companion")))
@interface KbskyCoreLabelerViewDetailedCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreLabelerViewDetailedCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol KbskyKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<KbskyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<KbskyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<KbskyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<KbskyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<KbskyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<KbskyKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<KbskyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<KbskyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<KbskyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<KbskyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KbskyKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<KbskyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KbskyKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<KbskyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<KbskyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<KbskyKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<KbskyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) KbskyKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface KbskyKotlinx_serialization_coreSerializersModule : KbskyBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<KbskyKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KbskyKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<KbskyKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<KbskyKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KbskyKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KbskyKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KbskyKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KbskyKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol KbskyKotlinAnnotation
@required
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface KbskyKotlinx_serialization_coreSerialKind : KbskyBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol KbskyKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<KbskyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<KbskyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<KbskyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<KbskyKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<KbskyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<KbskyKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<KbskyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<KbskyKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<KbskyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<KbskyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<KbskyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<KbskyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KbskyKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<KbskyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KbskyKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<KbskyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<KbskyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<KbskyKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) KbskyKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface KbskyKotlinNothing : KbskyBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface KbskyKtor_httpHttpMethodCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (KbskyKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<KbskyKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) KbskyKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) KbskyKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) KbskyKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) KbskyKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) KbskyKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) KbskyKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) KbskyKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KhttpclientHttpParameter.Type_")))
@interface KbskyKhttpclientHttpParameterType : KbskyKotlinEnum<KbskyKhttpclientHttpParameterType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KbskyKhttpclientHttpParameterType *query __attribute__((swift_name("query")));
@property (class, readonly) KbskyKhttpclientHttpParameterType *param __attribute__((swift_name("param")));
@property (class, readonly) KbskyKhttpclientHttpParameterType *file __attribute__((swift_name("file")));
@property (class, readonly) KbskyKhttpclientHttpParameterType *json __attribute__((swift_name("json")));
+ (KbskyKotlinArray<KbskyKhttpclientHttpParameterType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<KbskyKhttpclientHttpParameterType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KhttpclientHttpParameter.Companion")))
@interface KbskyKhttpclientHttpParameterCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyKhttpclientHttpParameterCompanion *shared __attribute__((swift_name("shared")));
- (KbskyKhttpclientHttpParameter *)fileKey:(NSString *)key fileName:(NSString *)fileName fileBody:(KbskyKotlinByteArray *)fileBody __attribute__((swift_name("file(key:fileName:fileBody:)")));
- (KbskyKhttpclientHttpParameter *)jsonJson:(NSString *)json __attribute__((swift_name("json(json:)")));
- (KbskyKhttpclientHttpParameter *)paramKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("param(key:value:)")));
- (KbskyKhttpclientHttpParameter *)queryKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("query(key:value:)")));
@end

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface KbskyKtor_httpHeaderValueWithParameters : KbskyBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<KbskyKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<KbskyKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface KbskyKtor_httpContentType : KbskyKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<KbskyKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<KbskyKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(KbskyKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (KbskyKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (KbskyKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol KbskyKtor_httpHttpMessage
@required
@property (readonly) id<KbskyKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol KbskyKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<KbskyKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface KbskyKtor_client_coreHttpResponse : KbskyBase <KbskyKtor_httpHttpMessage, KbskyKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KbskyKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<KbskyKtor_ioByteReadChannel> rawContent __attribute__((swift_name("rawContent")));
@property (readonly) KbskyKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) KbskyKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) KbskyKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) KbskyKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJson.Default")))
@interface KbskyKotlinx_serialization_jsonJsonDefault : KbskyKotlinx_serialization_jsonJson
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyKotlinx_serialization_jsonJsonDefault *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface KbskyKotlinx_serialization_jsonJsonElement : KbskyBase
@property (class, readonly, getter=companion) KbskyKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonConfiguration")))
@interface KbskyKotlinx_serialization_jsonJsonConfiguration : KbskyBase
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL allowComments __attribute__((swift_name("allowComments")));
@property (readonly) BOOL allowSpecialFloatingPointValues __attribute__((swift_name("allowSpecialFloatingPointValues")));
@property (readonly) BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL allowTrailingComma __attribute__((swift_name("allowTrailingComma")));
@property (readonly) NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property KbskyKotlinx_serialization_jsonClassDiscriminatorMode *classDiscriminatorMode __attribute__((swift_name("classDiscriminatorMode")));
@property (readonly) BOOL coerceInputValues __attribute__((swift_name("coerceInputValues")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL decodeEnumsCaseInsensitive __attribute__((swift_name("decodeEnumsCaseInsensitive")));
@property (readonly) BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));
@property (readonly) BOOL explicitNulls __attribute__((swift_name("explicitNulls")));
@property (readonly) BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property (readonly) BOOL isLenient __attribute__((swift_name("isLenient")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) id<KbskyKotlinx_serialization_jsonJsonNamingStrategy> _Nullable namingStrategy __attribute__((swift_name("namingStrategy")));
@property (readonly) BOOL prettyPrint __attribute__((swift_name("prettyPrint")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));
@property (readonly) BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));
@property (readonly) BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGraphStarterPackFeedItem.Companion")))
@interface KbskyCoreGraphStarterPackFeedItemCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreGraphStarterPackFeedItemCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorDefsLabelerPrefItem.Companion")))
@interface KbskyCoreActorDefsLabelerPrefItemCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreActorDefsLabelerPrefItemCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActorDefsSavedFeed.Companion")))
@interface KbskyCoreActorDefsSavedFeedCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreActorDefsSavedFeedCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRichtextFacetLink.Companion")))
@interface KbskyCoreRichtextFacetLinkCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreRichtextFacetLinkCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRichtextFacetMention.Companion")))
@interface KbskyCoreRichtextFacetMentionCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreRichtextFacetMentionCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRichtextFacetTag.Companion")))
@interface KbskyCoreRichtextFacetTagCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreRichtextFacetTagCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedDefsReasonPin.Companion")))
@interface KbskyCoreFeedDefsReasonPinCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreFeedDefsReasonPinCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFeedDefsReasonRepost.Companion")))
@interface KbskyCoreFeedDefsReasonRepostCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreFeedDefsReasonRepostCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmbedExternalViewExternal")))
@interface KbskyCoreEmbedExternalViewExternal : KbskyBase
- (instancetype)initWithUri:(NSString *)uri title:(NSString *)title description:(NSString *)description thumb:(NSString * _Nullable)thumb __attribute__((swift_name("init(uri:title:description:thumb:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreEmbedExternalViewExternalCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreEmbedExternalViewExternal *)doCopyUri:(NSString *)uri title:(NSString *)title description:(NSString *)description thumb:(NSString * _Nullable)thumb __attribute__((swift_name("doCopy(uri:title:description:thumb:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (setter=setDescription:) NSString *description_ __attribute__((swift_name("description_")));
@property NSString * _Nullable thumb __attribute__((swift_name("thumb")));
@property NSString *title __attribute__((swift_name("title")));
@property NSString *uri __attribute__((swift_name("uri")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmbedExternalView.Companion")))
@interface KbskyCoreEmbedExternalViewCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreEmbedExternalViewCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmbedImagesViewImage")))
@interface KbskyCoreEmbedImagesViewImage : KbskyBase
- (instancetype)initWithThumb:(NSString * _Nullable)thumb fullsize:(NSString * _Nullable)fullsize alt:(NSString * _Nullable)alt aspectRatio:(KbskyCoreEmbedDefsAspectRatio * _Nullable)aspectRatio __attribute__((swift_name("init(thumb:fullsize:alt:aspectRatio:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreEmbedImagesViewImageCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreEmbedImagesViewImage *)doCopyThumb:(NSString * _Nullable)thumb fullsize:(NSString * _Nullable)fullsize alt:(NSString * _Nullable)alt aspectRatio:(KbskyCoreEmbedDefsAspectRatio * _Nullable)aspectRatio __attribute__((swift_name("doCopy(thumb:fullsize:alt:aspectRatio:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable alt __attribute__((swift_name("alt")));
@property (readonly) KbskyCoreEmbedDefsAspectRatio * _Nullable aspectRatio __attribute__((swift_name("aspectRatio")));
@property (readonly) NSString * _Nullable fullsize __attribute__((swift_name("fullsize")));
@property (readonly) NSString * _Nullable thumb __attribute__((swift_name("thumb")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmbedImagesView.Companion")))
@interface KbskyCoreEmbedImagesViewCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreEmbedImagesViewCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmbedRecordView.Companion")))
@interface KbskyCoreEmbedRecordViewCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreEmbedRecordViewCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmbedRecordWithMediaView.Companion")))
@interface KbskyCoreEmbedRecordWithMediaViewCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreEmbedRecordWithMediaViewCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmbedVideoView.Companion")))
@interface KbskyCoreEmbedVideoViewCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreEmbedVideoViewCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TYPE __attribute__((swift_name("TYPE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmbedExternalExternal.Companion")))
@interface KbskyCoreEmbedExternalExternalCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreEmbedExternalExternalCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmbedImagesImage.Companion")))
@interface KbskyCoreEmbedImagesImageCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreEmbedImagesImageCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmbedDefsAspectRatio.Companion")))
@interface KbskyCoreEmbedDefsAspectRatioCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreEmbedDefsAspectRatioCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLabelerViewerState.Companion")))
@interface KbskyCoreLabelerViewerStateCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreLabelerViewerStateCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLabelDefsLabelValueDefinition")))
@interface KbskyCoreLabelDefsLabelValueDefinition : KbskyBase
- (instancetype)initWithIdentifier:(NSString *)identifier severity:(NSString *)severity blurs:(NSString *)blurs defaultSetting:(NSString *)defaultSetting adultOnly:(BOOL)adultOnly locales:(NSArray<KbskyCoreLabelDefsLabelValueDefinitionStrings *> *)locales __attribute__((swift_name("init(identifier:severity:blurs:defaultSetting:adultOnly:locales:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreLabelDefsLabelValueDefinitionCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreLabelDefsLabelValueDefinition *)doCopyIdentifier:(NSString *)identifier severity:(NSString *)severity blurs:(NSString *)blurs defaultSetting:(NSString *)defaultSetting adultOnly:(BOOL)adultOnly locales:(NSArray<KbskyCoreLabelDefsLabelValueDefinitionStrings *> *)locales __attribute__((swift_name("doCopy(identifier:severity:blurs:defaultSetting:adultOnly:locales:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property BOOL adultOnly __attribute__((swift_name("adultOnly")));
@property NSString *blurs __attribute__((swift_name("blurs")));
@property NSString *defaultSetting __attribute__((swift_name("defaultSetting")));
@property NSString *identifier __attribute__((swift_name("identifier")));
@property NSArray<KbskyCoreLabelDefsLabelValueDefinitionStrings *> *locales __attribute__((swift_name("locales")));
@property NSString *severity __attribute__((swift_name("severity")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLabelerPolicies.Companion")))
@interface KbskyCoreLabelerPoliciesCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreLabelerPoliciesCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol KbskyKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<KbskyKotlinKClass>)kClass provider:(id<KbskyKotlinx_serialization_coreKSerializer> (^)(NSArray<id<KbskyKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<KbskyKotlinKClass>)kClass serializer:(id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<KbskyKotlinKClass>)baseClass actualClass:(id<KbskyKotlinKClass>)actualClass actualSerializer:(id<KbskyKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<KbskyKotlinKClass>)baseClass defaultDeserializerProvider:(id<KbskyKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<KbskyKotlinKClass>)baseClass defaultDeserializerProvider:(id<KbskyKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<KbskyKotlinKClass>)baseClass defaultSerializerProvider:(id<KbskyKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol KbskyKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol KbskyKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol KbskyKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol KbskyKotlinKClass <KbskyKotlinKDeclarationContainer, KbskyKotlinKAnnotatedElement, KbskyKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface KbskyKtor_httpHeaderValueParam : KbskyBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (KbskyKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface KbskyKtor_httpHeaderValueWithParametersCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<KbskyKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface KbskyKtor_httpContentTypeCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (KbskyKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) KbskyKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol KbskyKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<KbskyKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol KbskyKtor_httpHeaders <KbskyKtor_utilsStringValues>
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol KbskyKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<KbskyKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<KbskyKotlinCoroutineContextElement> _Nullable)getKey:(id<KbskyKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<KbskyKotlinCoroutineContext>)minusKeyKey:(id<KbskyKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<KbskyKotlinCoroutineContext>)plusContext:(id<KbskyKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface KbskyKtor_client_coreHttpClientCall : KbskyBase <KbskyKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(KbskyKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(KbskyKtor_client_coreHttpClient *)client requestData:(KbskyKtor_client_coreHttpRequestData *)requestData responseData:(KbskyKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(KbskyKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyNullableInfo:(KbskyKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyNullable(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<KbskyKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<KbskyKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) KbskyKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<KbskyKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<KbskyKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property KbskyKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol KbskyKtor_ioByteReadChannel
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentMin:(int32_t)min completionHandler:(void (^)(KbskyBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(min:completionHandler:)")));
- (void)cancelCause:(KbskyKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
@property (readonly) KbskyKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) id<KbskyKotlinx_io_coreSource> readBuffer __attribute__((swift_name("readBuffer")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface KbskyKtor_utilsGMTDate : KbskyBase <KbskyKotlinComparable>
- (instancetype)initWithSeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(KbskyKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(KbskyKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("init(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(KbskyKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (KbskyKtor_utilsGMTDate *)doCopy __attribute__((swift_name("doCopy()")));
- (KbskyKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(KbskyKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(KbskyKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) KbskyKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) KbskyKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface KbskyKtor_httpHttpStatusCode : KbskyBase <KbskyKotlinComparable>
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(KbskyKtor_httpHttpStatusCode *)other __attribute__((swift_name("compareTo(other:)")));
- (KbskyKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (KbskyKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface KbskyKtor_httpHttpProtocolVersion : KbskyBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (KbskyKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface KbskyKotlinx_serialization_jsonJsonElementCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonClassDiscriminatorMode")))
@interface KbskyKotlinx_serialization_jsonClassDiscriminatorMode : KbskyKotlinEnum<KbskyKotlinx_serialization_jsonClassDiscriminatorMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KbskyKotlinx_serialization_jsonClassDiscriminatorMode *none __attribute__((swift_name("none")));
@property (class, readonly) KbskyKotlinx_serialization_jsonClassDiscriminatorMode *allJsonObjects __attribute__((swift_name("allJsonObjects")));
@property (class, readonly) KbskyKotlinx_serialization_jsonClassDiscriminatorMode *polymorphic __attribute__((swift_name("polymorphic")));
+ (KbskyKotlinArray<KbskyKotlinx_serialization_jsonClassDiscriminatorMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<KbskyKotlinx_serialization_jsonClassDiscriminatorMode *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonNamingStrategy")))
@protocol KbskyKotlinx_serialization_jsonJsonNamingStrategy
@required
- (NSString *)serialNameForJsonDescriptor:(id<KbskyKotlinx_serialization_coreSerialDescriptor>)descriptor elementIndex:(int32_t)elementIndex serialName:(NSString *)serialName __attribute__((swift_name("serialNameForJson(descriptor:elementIndex:serialName:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmbedExternalViewExternal.Companion")))
@interface KbskyCoreEmbedExternalViewExternalCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreEmbedExternalViewExternalCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmbedImagesViewImage.Companion")))
@interface KbskyCoreEmbedImagesViewImageCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreEmbedImagesViewImageCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLabelDefsLabelValueDefinitionStrings")))
@interface KbskyCoreLabelDefsLabelValueDefinitionStrings : KbskyBase
- (instancetype)initWithLang:(NSString *)lang name:(NSString *)name description:(NSString *)description __attribute__((swift_name("init(lang:name:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyCoreLabelDefsLabelValueDefinitionStringsCompanion *companion __attribute__((swift_name("companion")));
- (KbskyCoreLabelDefsLabelValueDefinitionStrings *)doCopyLang:(NSString *)lang name:(NSString *)name description:(NSString *)description __attribute__((swift_name("doCopy(lang:name:description:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (setter=setDescription:) NSString *description_ __attribute__((swift_name("description_")));
@property NSString *lang __attribute__((swift_name("lang")));
@property NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLabelDefsLabelValueDefinition.Companion")))
@interface KbskyCoreLabelDefsLabelValueDefinitionCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreLabelDefsLabelValueDefinitionCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol KbskyKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol KbskyKotlinCoroutineContextElement <KbskyKotlinCoroutineContext>
@required
@property (readonly) id<KbskyKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol KbskyKotlinCoroutineContextKey
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="2.0")
*/
__attribute__((swift_name("KotlinAutoCloseable")))
@protocol KbskyKotlinAutoCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol KbskyKtor_ioCloseable <KbskyKotlinAutoCloseable>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface KbskyKtor_client_coreHttpClient : KbskyBase <KbskyKotlinx_coroutines_coreCoroutineScope, KbskyKtor_ioCloseable>
- (instancetype)initWithEngine:(id<KbskyKtor_client_coreHttpClientEngine>)engine userConfig:(KbskyKtor_client_coreHttpClientConfig<KbskyKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (KbskyKtor_client_coreHttpClient *)configBlock:(void (^)(KbskyKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<KbskyKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<KbskyKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<KbskyKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) KbskyKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) KbskyKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) KbskyKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) KbskyKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) KbskyKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) KbskyKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface KbskyKtor_client_coreHttpRequestData : KbskyBase
- (instancetype)initWithUrl:(KbskyKtor_httpUrl *)url method:(KbskyKtor_httpHttpMethod *)method headers:(id<KbskyKtor_httpHeaders>)headers body:(KbskyKtor_httpOutgoingContent *)body executionContext:(id<KbskyKotlinx_coroutines_coreJob>)executionContext attributes:(id<KbskyKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<KbskyKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) KbskyKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<KbskyKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<KbskyKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) KbskyKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) KbskyKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface KbskyKtor_client_coreHttpResponseData : KbskyBase
- (instancetype)initWithStatusCode:(KbskyKtor_httpHttpStatusCode *)statusCode requestTime:(KbskyKtor_utilsGMTDate *)requestTime headers:(id<KbskyKtor_httpHeaders>)headers version:(KbskyKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<KbskyKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<KbskyKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<KbskyKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) KbskyKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) KbskyKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) KbskyKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) KbskyKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface KbskyKtor_client_coreHttpClientCallCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface KbskyKtor_utilsTypeInfo : KbskyBase
- (instancetype)initWithType:(id<KbskyKotlinKClass>)type kotlinType:(id<KbskyKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithType:(id<KbskyKotlinKClass>)type reifiedType:(id<KbskyKotlinKType>)reifiedType kotlinType:(id<KbskyKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use constructor without reifiedType parameter.")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<KbskyKotlinKClass> type __attribute__((swift_name("type")));
@end

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol KbskyKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(KbskyKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(KbskyKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(KbskyKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(KbskyKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(KbskyKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(KbskyKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(KbskyKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(KbskyKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<KbskyKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol KbskyKtor_client_coreHttpRequest <KbskyKtor_httpHttpMessage, KbskyKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<KbskyKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) KbskyKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) KbskyKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) KbskyKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) KbskyKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Kotlinx_io_coreRawSource")))
@protocol KbskyKotlinx_io_coreRawSource <KbskyKotlinAutoCloseable>
@required
- (int64_t)readAtMostToSink:(KbskyKotlinx_io_coreBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readAtMostTo(sink:byteCount:)")));
@end

__attribute__((swift_name("Kotlinx_io_coreSource")))
@protocol KbskyKotlinx_io_coreSource <KbskyKotlinx_io_coreRawSource>
@required
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (id<KbskyKotlinx_io_coreSource>)peek __attribute__((swift_name("peek()")));
- (int32_t)readAtMostToSink:(KbskyKotlinByteArray *)sink startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("readAtMostTo(sink:startIndex:endIndex:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (void)readToSink:(id<KbskyKotlinx_io_coreRawSink>)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readTo(sink:byteCount:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (int64_t)transferToSink:(id<KbskyKotlinx_io_coreRawSink>)sink __attribute__((swift_name("transferTo(sink:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) KbskyKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface KbskyKtor_utilsWeekDay : KbskyKotlinEnum<KbskyKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KbskyKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) KbskyKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) KbskyKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) KbskyKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) KbskyKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) KbskyKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) KbskyKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (KbskyKotlinArray<KbskyKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<KbskyKtor_utilsWeekDay *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface KbskyKtor_utilsMonth : KbskyKotlinEnum<KbskyKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KbskyKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) KbskyKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) KbskyKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) KbskyKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) KbskyKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) KbskyKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) KbskyKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) KbskyKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) KbskyKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) KbskyKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) KbskyKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) KbskyKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (KbskyKotlinArray<KbskyKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<KbskyKtor_utilsMonth *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface KbskyKtor_utilsGMTDateCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) KbskyKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface KbskyKtor_httpHttpStatusCodeCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (KbskyKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) KbskyKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) KbskyKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) KbskyKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) KbskyKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) KbskyKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) KbskyKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) KbskyKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) KbskyKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) KbskyKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) KbskyKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) KbskyKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) KbskyKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) KbskyKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) KbskyKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) KbskyKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) KbskyKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) KbskyKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) KbskyKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) KbskyKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) KbskyKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) KbskyKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) KbskyKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) KbskyKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) KbskyKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) KbskyKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) KbskyKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) KbskyKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) KbskyKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) KbskyKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) KbskyKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) KbskyKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) KbskyKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) KbskyKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) KbskyKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) KbskyKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) KbskyKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) KbskyKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) KbskyKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) KbskyKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) KbskyKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) KbskyKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) KbskyKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) KbskyKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) KbskyKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) KbskyKtor_httpHttpStatusCode *TooEarly __attribute__((swift_name("TooEarly")));
@property (readonly) KbskyKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) KbskyKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) KbskyKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) KbskyKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) KbskyKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) KbskyKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) KbskyKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) KbskyKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<KbskyKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface KbskyKtor_httpHttpProtocolVersionCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (KbskyKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (KbskyKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) KbskyKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) KbskyKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) KbskyKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) KbskyKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) KbskyKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLabelDefsLabelValueDefinitionStrings.Companion")))
@interface KbskyCoreLabelDefsLabelValueDefinitionStringsCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyCoreLabelDefsLabelValueDefinitionStringsCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol KbskyKtor_client_coreHttpClientEngine <KbskyKotlinx_coroutines_coreCoroutineScope, KbskyKtor_ioCloseable>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(KbskyKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(KbskyKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(KbskyKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) KbskyKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) KbskyKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<KbskyKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface KbskyKtor_client_coreHttpClientEngineConfig : KbskyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KbskyKotlinx_coroutines_coreCoroutineDispatcher * _Nullable dispatcher __attribute__((swift_name("dispatcher")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property KbskyKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount"))) __attribute__((unavailable("The [threadsCount] property is deprecated. Consider setting [dispatcher] instead.")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface KbskyKtor_client_coreHttpClientConfig<T> : KbskyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KbskyKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(KbskyKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<KbskyKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(KbskyKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(KbskyKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode"))) __attribute__((deprecated("Development mode is no longer required. The property will be removed in the future.")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol KbskyKtor_client_coreHttpClientEngineCapability
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface KbskyKtor_eventsEvents : KbskyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(KbskyKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<KbskyKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(KbskyKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(KbskyKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface KbskyKtor_utilsPipeline<TSubject, TContext> : KbskyBase
- (instancetype)initWithPhases:(KbskyKotlinArray<KbskyKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(KbskyKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<KbskyKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(KbskyKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(KbskyKtor_utilsPipelinePhase *)reference phase:(KbskyKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(KbskyKtor_utilsPipelinePhase *)reference phase:(KbskyKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(KbskyKtor_utilsPipelinePhase *)phase block:(id<KbskyKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<KbskyKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(KbskyKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(KbskyKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(KbskyKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(KbskyKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly, getter=isEmpty_) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<KbskyKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface KbskyKtor_client_coreHttpReceivePipeline : KbskyKtor_utilsPipeline<KbskyKtor_client_coreHttpResponse *, KbskyKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(KbskyKotlinArray<KbskyKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(KbskyKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<KbskyKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface KbskyKtor_client_coreHttpRequestPipeline : KbskyKtor_utilsPipeline<id, KbskyKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(KbskyKotlinArray<KbskyKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(KbskyKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<KbskyKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface KbskyKtor_client_coreHttpResponsePipeline : KbskyKtor_utilsPipeline<KbskyKtor_client_coreHttpResponseContainer *, KbskyKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(KbskyKotlinArray<KbskyKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(KbskyKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<KbskyKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface KbskyKtor_client_coreHttpSendPipeline : KbskyKtor_utilsPipeline<id, KbskyKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(KbskyKotlinArray<KbskyKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(KbskyKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<KbskyKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((swift_name("Ktor_ioJvmSerializable")))
@protocol KbskyKtor_ioJvmSerializable
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=io/ktor/http/UrlSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface KbskyKtor_httpUrl : KbskyBase <KbskyKtor_ioJvmSerializable>
@property (class, readonly, getter=companion) KbskyKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<KbskyKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments"))) __attribute__((deprecated("\n        `pathSegments` is deprecated.\n\n        This property will contain an empty path segment at the beginning for URLs with a hostname,\n        and an empty path segment at the end for the URLs with a trailing slash. If you need to keep this behaviour please\n        use [rawSegments]. If you only need to access the meaningful parts of the path, consider using [segments] instead.\n             \n        Please decide if you need [rawSegments] or [segments] explicitly.\n        ")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) KbskyKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) KbskyKtor_httpURLProtocol * _Nullable protocolOrNull __attribute__((swift_name("protocolOrNull")));
@property (readonly) NSArray<NSString *> *rawSegments __attribute__((swift_name("rawSegments")));
@property (readonly) NSArray<NSString *> *segments __attribute__((swift_name("segments")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface KbskyKtor_httpOutgoingContent : KbskyBase
- (id _Nullable)getPropertyKey:(KbskyKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(KbskyKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<KbskyKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) KbskyLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) KbskyKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<KbskyKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) KbskyKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol KbskyKotlinx_coroutines_coreJob <KbskyKotlinCoroutineContextElement>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<KbskyKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<KbskyKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause_:(KbskyKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (KbskyKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<KbskyKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(KbskyKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<KbskyKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(KbskyKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<KbskyKotlinx_coroutines_coreJob>)plusOther:(id<KbskyKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<KbskyKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<KbskyKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly) id<KbskyKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((swift_name("KotlinKType")))
@protocol KbskyKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<KbskyKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<KbskyKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface KbskyKtor_utilsAttributeKey<T> : KbskyBase

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (instancetype)initWithName:(NSString *)name type:(KbskyKtor_utilsTypeInfo *)type __attribute__((swift_name("init(name:type:)"))) __attribute__((objc_designated_initializer));
- (KbskyKtor_utilsAttributeKey<T> *)doCopyName:(NSString *)name type:(KbskyKtor_utilsTypeInfo *)type __attribute__((swift_name("doCopy(name:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Kotlinx_io_coreRawSink")))
@protocol KbskyKotlinx_io_coreRawSink <KbskyKotlinAutoCloseable>
@required
- (void)flush __attribute__((swift_name("flush()")));
- (void)writeSource:(KbskyKotlinx_io_coreBuffer *)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
@end

__attribute__((swift_name("Kotlinx_io_coreSink")))
@protocol KbskyKotlinx_io_coreSink <KbskyKotlinx_io_coreRawSink>
@required
- (void)emit __attribute__((swift_name("emit()")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
- (void)hintEmit __attribute__((swift_name("hintEmit()")));
- (int64_t)transferFromSource:(id<KbskyKotlinx_io_coreRawSource>)source __attribute__((swift_name("transferFrom(source:)")));
- (void)writeSource:(id<KbskyKotlinx_io_coreRawSource>)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));
- (void)writeSource:(KbskyKotlinByteArray *)source startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("write(source:startIndex:endIndex:)")));
- (void)writeByteByte:(int8_t)byte __attribute__((swift_name("writeByte(byte:)")));
- (void)writeIntInt:(int32_t)int_ __attribute__((swift_name("writeInt(int:)")));
- (void)writeLongLong:(int64_t)long_ __attribute__((swift_name("writeLong(long:)")));
- (void)writeShortShort:(int16_t)short_ __attribute__((swift_name("writeShort(short:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) KbskyKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_io_coreBuffer")))
@interface KbskyKotlinx_io_coreBuffer : KbskyBase <KbskyKotlinx_io_coreSource, KbskyKotlinx_io_coreSink>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clear __attribute__((swift_name("clear()")));
- (void)close __attribute__((swift_name("close()")));
- (KbskyKotlinx_io_coreBuffer *)doCopy __attribute__((swift_name("doCopy()")));
- (void)doCopyToOut:(KbskyKotlinx_io_coreBuffer *)out startIndex:(int64_t)startIndex endIndex:(int64_t)endIndex __attribute__((swift_name("doCopyTo(out:startIndex:endIndex:)")));
- (void)emit __attribute__((swift_name("emit()")));
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (void)flush __attribute__((swift_name("flush()")));
- (int8_t)getPosition:(int64_t)position __attribute__((swift_name("get(position:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
- (void)hintEmit __attribute__((swift_name("hintEmit()")));
- (id<KbskyKotlinx_io_coreSource>)peek __attribute__((swift_name("peek()")));
- (int64_t)readAtMostToSink:(KbskyKotlinx_io_coreBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readAtMostTo(sink:byteCount:)")));
- (int32_t)readAtMostToSink:(KbskyKotlinByteArray *)sink startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("readAtMostTo(sink:startIndex:endIndex:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (void)readToSink:(id<KbskyKotlinx_io_coreRawSink>)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readTo(sink:byteCount:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int64_t)transferFromSource:(id<KbskyKotlinx_io_coreRawSource>)source __attribute__((swift_name("transferFrom(source:)")));
- (int64_t)transferToSink:(id<KbskyKotlinx_io_coreRawSink>)sink __attribute__((swift_name("transferTo(sink:)")));
- (void)writeSource:(KbskyKotlinx_io_coreBuffer *)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
- (void)writeSource:(id<KbskyKotlinx_io_coreRawSource>)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));
- (void)writeSource:(KbskyKotlinByteArray *)source startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("write(source:startIndex:endIndex:)")));
- (void)writeByteByte:(int8_t)byte __attribute__((swift_name("writeByte(byte:)")));
- (void)writeIntInt:(int32_t)int_ __attribute__((swift_name("writeInt(int:)")));
- (void)writeLongLong:(int64_t)long_ __attribute__((swift_name("writeLong(long:)")));
- (void)writeShortShort:(int16_t)short_ __attribute__((swift_name("writeShort(short:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) KbskyKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface KbskyKtor_utilsWeekDayCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (KbskyKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (KbskyKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface KbskyKtor_utilsMonthCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (KbskyKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (KbskyKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface KbskyKotlinAbstractCoroutineContextElement : KbskyBase <KbskyKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<KbskyKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<KbskyKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol KbskyKotlinContinuationInterceptor <KbskyKotlinCoroutineContextElement>
@required
- (id<KbskyKotlinContinuation>)interceptContinuationContinuation:(id<KbskyKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<KbskyKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface KbskyKotlinx_coroutines_coreCoroutineDispatcher : KbskyKotlinAbstractCoroutineContextElement <KbskyKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<KbskyKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KbskyKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<KbskyKotlinCoroutineContext>)context block:(id<KbskyKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)dispatchYieldContext:(id<KbskyKotlinCoroutineContext>)context block:(id<KbskyKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<KbskyKotlinContinuation>)interceptContinuationContinuation:(id<KbskyKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<KbskyKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (KbskyKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism name:(NSString * _Nullable)name __attribute__((swift_name("limitedParallelism(parallelism:name:)")));
- (KbskyKotlinx_coroutines_coreCoroutineDispatcher *)plusOther_:(KbskyKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<KbskyKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface KbskyKtor_client_coreProxyConfig : KbskyBase
- (instancetype)initWithUrl:(KbskyKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KbskyKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol KbskyKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(KbskyKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) KbskyKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface KbskyKtor_eventsEventDefinition<T> : KbskyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol KbskyKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface KbskyKtor_utilsPipelinePhase : KbskyBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol KbskyKotlinSuspendFunction2 <KbskyKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface KbskyKtor_client_coreHttpReceivePipelinePhases : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) KbskyKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) KbskyKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) KbskyKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface KbskyKtor_client_coreHttpRequestPipelinePhases : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) KbskyKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) KbskyKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) KbskyKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) KbskyKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) KbskyKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol KbskyKtor_httpHttpMessageBuilder
@required
@property (readonly) KbskyKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface KbskyKtor_client_coreHttpRequestBuilder : KbskyBase <KbskyKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KbskyKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (KbskyKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<KbskyKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<KbskyKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<KbskyKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (KbskyKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(KbskyKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (KbskyKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(KbskyKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(KbskyKtor_httpURLBuilder *, KbskyKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<KbskyKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property KbskyKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<KbskyKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) KbskyKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property KbskyKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) KbskyKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface KbskyKtor_client_coreHttpResponsePipelinePhases : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) KbskyKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) KbskyKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) KbskyKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) KbskyKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) KbskyKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface KbskyKtor_client_coreHttpResponseContainer : KbskyBase
- (instancetype)initWithExpectedType:(KbskyKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (KbskyKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(KbskyKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KbskyKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface KbskyKtor_client_coreHttpSendPipelinePhases : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) KbskyKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) KbskyKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) KbskyKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) KbskyKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) KbskyKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface KbskyKtor_httpUrlCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
- (id<KbskyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Ktor_httpParameters")))
@protocol KbskyKtor_httpParameters <KbskyKtor_utilsStringValues>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface KbskyKtor_httpURLProtocol : KbskyBase <KbskyKtor_ioJvmSerializable>
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (KbskyKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol KbskyKotlinx_coroutines_coreChildHandle <KbskyKotlinx_coroutines_coreDisposableHandle>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (BOOL)childCancelledCause:(KbskyKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
@property (readonly) id<KbskyKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol KbskyKotlinx_coroutines_coreChildJob <KbskyKotlinx_coroutines_coreJob>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)parentCancelledParentJob:(id<KbskyKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol KbskyKotlinSequence
@required
- (id<KbskyKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause")))
@protocol KbskyKotlinx_coroutines_coreSelectClause
@required
@property (readonly) id clauseObject __attribute__((swift_name("clauseObject")));
@property (readonly) KbskyKotlinUnit *(^(^ _Nullable onCancellationConstructor)(id<KbskyKotlinx_coroutines_coreSelectInstance>, id _Nullable, id _Nullable))(KbskyKotlinThrowable *, id _Nullable, id<KbskyKotlinCoroutineContext>) __attribute__((swift_name("onCancellationConstructor")));
@property (readonly) id _Nullable (^processResFunc)(id, id _Nullable, id _Nullable) __attribute__((swift_name("processResFunc")));
@property (readonly) void (^regFunc)(id, id<KbskyKotlinx_coroutines_coreSelectInstance>, id _Nullable) __attribute__((swift_name("regFunc")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol KbskyKotlinx_coroutines_coreSelectClause0 <KbskyKotlinx_coroutines_coreSelectClause>
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface KbskyKotlinKTypeProjection : KbskyBase
- (instancetype)initWithVariance:(KbskyKotlinKVariance * _Nullable)variance type:(id<KbskyKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (KbskyKotlinKTypeProjection *)doCopyVariance:(KbskyKotlinKVariance * _Nullable)variance type:(id<KbskyKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KbskyKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) KbskyKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol KbskyKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<KbskyKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface KbskyKotlinAbstractCoroutineContextKey<B, E> : KbskyBase <KbskyKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<KbskyKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<KbskyKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface KbskyKotlinx_coroutines_coreCoroutineDispatcherKey : KbskyKotlinAbstractCoroutineContextKey<id<KbskyKotlinContinuationInterceptor>, KbskyKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<KbskyKotlinCoroutineContextKey>)baseKey safeCast:(id<KbskyKotlinCoroutineContextElement> _Nullable (^)(id<KbskyKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol KbskyKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol KbskyKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<KbskyKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<KbskyKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<KbskyKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<KbskyKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface KbskyKtor_utilsStringValuesBuilderImpl : KbskyBase <KbskyKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<KbskyKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<KbskyKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<KbskyKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<KbskyKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) KbskyMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface KbskyKtor_httpHeadersBuilder : KbskyKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<KbskyKtor_httpHeaders>)build __attribute__((swift_name("build()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface KbskyKtor_client_coreHttpRequestBuilderCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface KbskyKtor_httpURLBuilder : KbskyBase
- (instancetype)initWithProtocol:(KbskyKtor_httpURLProtocol * _Nullable)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<KbskyKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KbskyKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (KbskyKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<KbskyKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<KbskyKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property KbskyKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property KbskyKtor_httpURLProtocol * _Nullable protocolOrNull __attribute__((swift_name("protocolOrNull")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface KbskyKtor_httpURLProtocolCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (KbskyKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) KbskyKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) KbskyKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) KbskyKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) KbskyKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) KbskyKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, KbskyKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol KbskyKotlinx_coroutines_coreParentJob <KbskyKotlinx_coroutines_coreJob>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (KbskyKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol KbskyKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnCompletionDisposableHandle:(id<KbskyKotlinx_coroutines_coreDisposableHandle>)disposableHandle __attribute__((swift_name("disposeOnCompletion(disposableHandle:)")));
- (void)selectInRegistrationPhaseInternalResult:(id _Nullable)internalResult __attribute__((swift_name("selectInRegistrationPhase(internalResult:)")));
- (BOOL)trySelectClauseObject:(id)clauseObject result:(id _Nullable)result __attribute__((swift_name("trySelect(clauseObject:result:)")));
@property (readonly) id<KbskyKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface KbskyKotlinKVariance : KbskyKotlinEnum<KbskyKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KbskyKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) KbskyKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) KbskyKotlinKVariance *out __attribute__((swift_name("out")));
+ (KbskyKotlinArray<KbskyKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<KbskyKotlinKVariance *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface KbskyKotlinKTypeProjectionCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (KbskyKotlinKTypeProjection *)contravariantType:(id<KbskyKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (KbskyKotlinKTypeProjection *)covariantType:(id<KbskyKotlinKType>)type __attribute__((swift_name("covariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (KbskyKotlinKTypeProjection *)invariantType:(id<KbskyKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) KbskyKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface KbskyKtor_httpURLBuilderCompanion : KbskyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KbskyKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol KbskyKtor_httpParametersBuilder <KbskyKtor_utilsStringValuesBuilder>
@required
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
