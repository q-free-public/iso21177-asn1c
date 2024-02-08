/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2CrlBaseTypes"
 * 	found in "../../asn1/../ttcn/AtsPki/lib/asn1/ieee_1609.2.1/Ieee1609Dot2CrlBaseTypes.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include "LaId.h"
#include "SequenceOfIMaxGroup.h"
#include <constr_SEQUENCE.h>
#ifndef	_LAGroup_H_
#define	_LAGroup_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LAGroup */
typedef struct LAGroup {
	LaId_t	 la1Id;
	LaId_t	 la2Id;
	SequenceOfIMaxGroup_t	 contents;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LAGroup_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LAGroup;
extern asn_SEQUENCE_specifics_t asn_SPC_LAGroup_specs_1;
extern asn_TYPE_member_t asn_MBR_LAGroup_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LAGroup_H_ */
#include <asn_internal.h>