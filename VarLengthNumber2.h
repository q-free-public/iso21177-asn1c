/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "CITSapplMgmtIDs"
 * 	found in "../../asn1/../ttcn/../build/asn1/ISO_TS_17419/CITSapplMgmtIDs.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_CHOICE.h>
#ifndef	_VarLengthNumber2_H_
#define	_VarLengthNumber2_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum VarLengthNumber2_PR {
	VarLengthNumber2_PR_NOTHING,	/* No components present */
	VarLengthNumber2_PR_shortNo,
	VarLengthNumber2_PR_longNo
} VarLengthNumber2_PR;

/* VarLengthNumber2 */
typedef struct VarLengthNumber2 {
	VarLengthNumber2_PR present;
	union VarLengthNumber2_u {
		long	 shortNo;
		long	 longNo;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VarLengthNumber2_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VarLengthNumber2;

#ifdef __cplusplus
}
#endif

#endif	/* _VarLengthNumber2_H_ */
#include <asn_internal.h>