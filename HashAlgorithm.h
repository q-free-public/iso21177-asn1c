/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2BaseTypes"
 * 	found in "../../asn1/../ttcn/AtsSecurity/lib/asn1/ieee1609dot2/Ieee1609Dot2BaseTypes.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include <NativeEnumerated.h>
#ifndef	_HashAlgorithm_H_
#define	_HashAlgorithm_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HashAlgorithm {
	HashAlgorithm_sha256	= 0,
	/*
	 * Enumeration is extensible
	 */
	HashAlgorithm_sha384	= 1
} e_HashAlgorithm;

/* HashAlgorithm */
typedef long	 HashAlgorithm_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_HashAlgorithm_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_HashAlgorithm;
extern const asn_INTEGER_specifics_t asn_SPC_HashAlgorithm_specs_1;
asn_struct_free_f HashAlgorithm_free;
asn_struct_print_f HashAlgorithm_print;
asn_constr_check_f HashAlgorithm_constraint;
ber_type_decoder_f HashAlgorithm_decode_ber;
der_type_encoder_f HashAlgorithm_encode_der;
xer_type_decoder_f HashAlgorithm_decode_xer;
xer_type_encoder_f HashAlgorithm_encode_xer;
jer_type_encoder_f HashAlgorithm_encode_jer;
oer_type_decoder_f HashAlgorithm_decode_oer;
oer_type_encoder_f HashAlgorithm_encode_oer;
per_type_decoder_f HashAlgorithm_decode_uper;
per_type_encoder_f HashAlgorithm_encode_uper;
per_type_decoder_f HashAlgorithm_decode_aper;
per_type_encoder_f HashAlgorithm_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _HashAlgorithm_H_ */
#include <asn_internal.h>