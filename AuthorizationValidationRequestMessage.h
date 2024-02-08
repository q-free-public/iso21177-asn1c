/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "EtsiTs102941MessagesCa"
 * 	found in "../../asn1/../ttcn/AtsPki/lib/asn1/EtsiTs102941MessagesCa.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include "EtsiTs103097Data-SignedAndEncrypted-Unicast.h"
#ifndef	_AuthorizationValidationRequestMessage_H_
#define	_AuthorizationValidationRequestMessage_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* AuthorizationValidationRequestMessage */
typedef EtsiTs103097Data_SignedAndEncrypted_Unicast_115P0_t	 AuthorizationValidationRequestMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AuthorizationValidationRequestMessage;
asn_struct_free_f AuthorizationValidationRequestMessage_free;
asn_struct_print_f AuthorizationValidationRequestMessage_print;
asn_constr_check_f AuthorizationValidationRequestMessage_constraint;
ber_type_decoder_f AuthorizationValidationRequestMessage_decode_ber;
der_type_encoder_f AuthorizationValidationRequestMessage_encode_der;
xer_type_decoder_f AuthorizationValidationRequestMessage_decode_xer;
xer_type_encoder_f AuthorizationValidationRequestMessage_encode_xer;
jer_type_encoder_f AuthorizationValidationRequestMessage_encode_jer;
oer_type_decoder_f AuthorizationValidationRequestMessage_decode_oer;
oer_type_encoder_f AuthorizationValidationRequestMessage_encode_oer;
per_type_decoder_f AuthorizationValidationRequestMessage_decode_uper;
per_type_encoder_f AuthorizationValidationRequestMessage_encode_uper;
per_type_decoder_f AuthorizationValidationRequestMessage_decode_aper;
per_type_encoder_f AuthorizationValidationRequestMessage_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _AuthorizationValidationRequestMessage_H_ */
#include <asn_internal.h>