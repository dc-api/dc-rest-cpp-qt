/**
 * Discord HTTP API (Preview) - REST API Client
 * Preview of the Discord v10 HTTP API specification. See https://discord.com/developers/docs for more details.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 10
 * - **Modified**: 2025-07-01T06:33:49.033017897Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Discord HTTP API (Preview) service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

#include "OAIPollAnswerResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIPollAnswerResponse::OAIPollAnswerResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPollAnswerResponse::OAIPollAnswerResponse() {
    this->initializeModel();
}

OAIPollAnswerResponse::~OAIPollAnswerResponse() {}

void OAIPollAnswerResponse::initializeModel() {

    m_answer_id_isSet = false;
    m_answer_id_isValid = false;

    m_poll_media_isSet = false;
    m_poll_media_isValid = false;
}

void OAIPollAnswerResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPollAnswerResponse::fromJsonObject(QJsonObject json) {

    m_answer_id_isValid = ::dc_rest::fromJsonValue(m_answer_id, json[QString("answer_id")]);
    m_answer_id_isSet = !json[QString("answer_id")].isNull() && m_answer_id_isValid;

    m_poll_media_isValid = ::dc_rest::fromJsonValue(m_poll_media, json[QString("poll_media")]);
    m_poll_media_isSet = !json[QString("poll_media")].isNull() && m_poll_media_isValid;
}

QString OAIPollAnswerResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPollAnswerResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_answer_id_isSet) {
        obj.insert(QString("answer_id"), ::dc_rest::toJsonValue(m_answer_id));
    }
    if (m_poll_media.isSet()) {
        obj.insert(QString("poll_media"), ::dc_rest::toJsonValue(m_poll_media));
    }
    return obj;
}

qint32 OAIPollAnswerResponse::getAnswerId() const {
    return m_answer_id;
}
void OAIPollAnswerResponse::setAnswerId(const qint32 &answer_id) {
    m_answer_id = answer_id;
    m_answer_id_isSet = true;
}

bool OAIPollAnswerResponse::is_answer_id_Set() const{
    return m_answer_id_isSet;
}

bool OAIPollAnswerResponse::is_answer_id_Valid() const{
    return m_answer_id_isValid;
}

OAIPollMediaResponse OAIPollAnswerResponse::getPollMedia() const {
    return m_poll_media;
}
void OAIPollAnswerResponse::setPollMedia(const OAIPollMediaResponse &poll_media) {
    m_poll_media = poll_media;
    m_poll_media_isSet = true;
}

bool OAIPollAnswerResponse::is_poll_media_Set() const{
    return m_poll_media_isSet;
}

bool OAIPollAnswerResponse::is_poll_media_Valid() const{
    return m_poll_media_isValid;
}

bool OAIPollAnswerResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_answer_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_poll_media.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPollAnswerResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_answer_id_isValid && m_poll_media_isValid && true;
}

} // namespace dc_rest
