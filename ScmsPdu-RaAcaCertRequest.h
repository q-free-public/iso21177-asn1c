/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2Dot1Protocol"
 * 	found in "../../asn1/../ttcn/AtsPki/lib/asn1/ieee_1609.2.1/Ieee1609Dot2Dot1Protocol.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include "ScmsPdu-Scoped.h"
#ifndef	_ScmsPdu_RaAcaCertRequest_H_
#define	_ScmsPdu_RaAcaCertRequest_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ScmsPdu-RaAcaCertRequest */
typedef ScmsPdu_Scoped_200P0_t	 ScmsPdu_RaAcaCertRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ScmsPdu_RaAcaCertRequest;
asn_struct_free_f ScmsPdu_RaAcaCertRequest_free;
asn_struct_print_f ScmsPdu_RaAcaCertRequest_print;
asn_constr_check_f ScmsPdu_RaAcaCertRequest_constraint;
ber_type_decoder_f ScmsPdu_RaAcaCertRequest_decode_ber;
der_type_encoder_f ScmsPdu_RaAcaCertRequest_encode_der;
xer_type_decoder_f ScmsPdu_RaAcaCertRequest_decode_xer;
xer_type_encoder_f ScmsPdu_RaAcaCertRequest_encode_xer;
jer_type_encoder_f ScmsPdu_RaAcaCertRequest_encode_jer;
oer_type_decoder_f ScmsPdu_RaAcaCertRequest_decode_oer;
oer_type_encoder_f ScmsPdu_RaAcaCertRequest_encode_oer;
per_type_decoder_f ScmsPdu_RaAcaCertRequest_decode_uper;
per_type_encoder_f ScmsPdu_RaAcaCertRequest_encode_uper;
per_type_decoder_f ScmsPdu_RaAcaCertRequest_decode_aper;
per_type_encoder_f ScmsPdu_RaAcaCertRequest_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ScmsPdu_RaAcaCertRequest_H_ */
#include <asn_internal.h>