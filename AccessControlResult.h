/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "Iso21177AccessControl"
 * 	found in "../../asn1/../ttcn/Ats21177/21177/EN_ISO_21177_access_control.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include <NativeInteger.h>
#ifndef	_AccessControlResult_H_
#define	_AccessControlResult_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AccessControlResult {
	AccessControlResult_success	= 0,
	AccessControlResult_authorization_failure	= 1
} e_AccessControlResult;

/* AccessControlResult */
typedef long	 AccessControlResult_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_AccessControlResult_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_AccessControlResult;
asn_struct_free_f AccessControlResult_free;
asn_struct_print_f AccessControlResult_print;
asn_constr_check_f AccessControlResult_constraint;
ber_type_decoder_f AccessControlResult_decode_ber;
der_type_encoder_f AccessControlResult_encode_der;
xer_type_decoder_f AccessControlResult_decode_xer;
xer_type_encoder_f AccessControlResult_encode_xer;
jer_type_encoder_f AccessControlResult_encode_jer;
oer_type_decoder_f AccessControlResult_decode_oer;
oer_type_encoder_f AccessControlResult_encode_oer;
per_type_decoder_f AccessControlResult_decode_uper;
per_type_encoder_f AccessControlResult_encode_uper;
per_type_decoder_f AccessControlResult_decode_aper;
per_type_encoder_f AccessControlResult_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _AccessControlResult_H_ */
#include <asn_internal.h>
