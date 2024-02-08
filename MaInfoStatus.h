/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2Dot1CertManagement"
 * 	found in "../../asn1/../ttcn/AtsPki/lib/asn1/ieee_1609.2.1/Ieee1609Dot2Dot1CertManagement.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include "SequenceOfPsid.h"
#include "Time32.h"
#include <constr_SEQUENCE.h>
#ifndef	_MaInfoStatus_H_
#define	_MaInfoStatus_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MaInfoStatus */
typedef struct MaInfoStatus {
	SequenceOfPsid_t	 psids;
	Time32_t	 updated;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MaInfoStatus_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MaInfoStatus;
extern asn_SEQUENCE_specifics_t asn_SPC_MaInfoStatus_specs_1;
extern asn_TYPE_member_t asn_MBR_MaInfoStatus_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MaInfoStatus_H_ */
#include <asn_internal.h>