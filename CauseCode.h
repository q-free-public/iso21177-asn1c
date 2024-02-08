/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "../../asn1/../ttcn/AtsCAM/lib/asn1/cdd/ITS_Container.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include "CauseCodeType.h"
#include "SubCauseCodeType.h"
#include <constr_SEQUENCE.h>
#ifndef	_CauseCode_H_
#define	_CauseCode_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CauseCode */
typedef struct CauseCode {
	CauseCodeType_t	 causeCode;
	SubCauseCodeType_t	 subCauseCode;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CauseCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CauseCode;
extern asn_SEQUENCE_specifics_t asn_SPC_CauseCode_specs_1;
extern asn_TYPE_member_t asn_MBR_CauseCode_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CauseCode_H_ */
#include <asn_internal.h>
