#pragma once
#include "CoreMinimal.h"
#include "EResultBP.generated.h"

UENUM(BlueprintType)
enum class EResultBP : uint8 {
    None,
    RR_OK,
    R_Fail,
    R_NoConnection,
    R_InvalidPassword = 5,
    R_LoggedInElsewhere,
    R_InvalidProtocolVer,
    R_InvalidParam,
    R_FileNotFound,
    R_Busy,
    R_InvalidState,
    R_InvalidName,
    R_InvalidEmail,
    R_DuplicateName,
    R_AccessDenied,
    R_Timeout,
    R_Banned,
    R_AccountNotFound,
    R_InvalidSteamID,
    R_ServiceUnavailable,
    R_NotLoggedOn,
    R_Pending,
    R_EncryptionFailure,
    R_InsufficientPrivilege,
    R_LimitExceeded,
    R_Revoked,
    R_Expired,
    R_AlreadyRedeemed,
    R_DuplicateRequest,
    R_AlreadyOwned,
    R_IPNotFound,
    R_PersistFailed,
    R_LockingFailed,
    R_LogonSessionReplaced,
    R_ConnectFailed,
    R_HandshakeFailed,
    R_IOFailure,
    R_RemoteDisconnect,
    R_ShoppingCartNotFound,
    R_Blocked,
    R_Ignored,
    R_NoMatch,
    R_AccountDisabled,
    R_ServiceReadOnly,
    R_AccountNotFeatured,
    R_AdministratorOK,
    R_ContentVersion,
    R_TryAnotherCM,
    R_PasswordRequiredToKickSession,
    R_AlreadyLoggedInElsewhere,
    R_Suspended,
    R_Cancelled,
    R_DataCorruption,
    R_DiskFull,
    R_RemoteCallFailed,
    R_PasswordUnset,
    R_ExternalAccountUnlinked,
    R_PSNTicketInvalid,
    R_ExternalAccountAlreadyLinked,
    R_RemoteFileConflict,
    R_IllegalPassword,
    R_SameAsPreviousValue,
    R_AccountLogonDenied,
    R_CannotUseOldPassword,
    R_InvalidLoginAuthCode,
    R_AccountLogonDeniedNoMail,
    R_HardwareNotCapableOfIPT,
    R_IPTInitError,
    R_ParentalControlRestricted,
    R_FacebookQueryError,
    R_ExpiredLoginAuthCode,
    R_IPLoginRestrictionFailed,
    R_AccountLockedDown,
    R_AccountLogonDeniedVerifiedEmailRequired,
    R_NoMatchingURL,
    R_BadResponse,
    R_RequirePasswordReEntry,
    R_ValueOutOfRange,
    R_UnexpectedError,
    R_Disabled,
    R_InvalidCEGSubmission,
    R_RestrictedDevice,
    R_RegionLocked,
    R_RateLimitExceeded,
    R_AccountLoginDeniedNeedTwoFactor,
    R_ItemDeleted,
    R_AccountLoginDeniedThrottle,
    R_TwoFactorCodeMismatch,
    R_TwoFactorActivationCodeMismatch,
    R_AccountAssociatedToMultiplePartners,
    R_NotModified,
    R_NoMobileDevice,
    R_TimeNotSynced,
    R_SmsCodeFailed,
    R_AccountLimitExceeded,
    R_AccountActivityLimitExceeded,
    R_PhoneActivityLimitExceeded,
    R_RefundToWallet,
    R_EmailSendFailure,
    R_NotSettled,
    R_NeedCaptcha,
    R_GSLTDenied,
    R_GSOwnerDenied,
    R_InvalidItemType,
    R_IPBanned,
    R_GSLTExpired,
    R_InsufficientFunds,
    R_TooManyPending,
};

